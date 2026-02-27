#include <iostream>
#include <fstream>
#include <string>

static void replace_all(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;

    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Error: provide ./sed <filename> <s1> <s2>\n";
        return 1;
    }

    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (fileName.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "Error: inputs can't be empty\n";
        return 1;
    }

    std::ifstream in(fileName.c_str());
    if (!in)
    {
        std::cerr << "Error: Unable to open input file\n";
        return 1;
    }

    std::string outName = fileName + ".replace";
    std::ofstream out(outName.c_str());
    if (!out)
    {
        std::cerr << "Error: Unable to open output file\n";
        return 1;
    }

    std::string line;
    while (std::getline(in, line))
    {
        replace_all(line, s1, s2);
        out << line;
        if (!in.eof())
            out << "\n";
    }
    return 0;
}