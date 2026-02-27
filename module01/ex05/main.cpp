#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("WARNING");

    return 0;
}