#include <string>
#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Address of the string variable:" << &string << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Stored value of string " << string << std::endl;
    std::cout << "Stored value of stringPTR " << *stringPTR << std::endl;
    std::cout << "Stored value of stringREF " << stringREF << std::endl;
    return 0;
}