#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== FRAGTRAP CHAIN ===" << std::endl;
    {
        FragTrap frag("Frag-01");
        frag.attack("Demon");
        frag.highFivesGuys();
    }
}