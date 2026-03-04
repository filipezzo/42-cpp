#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== CREATE ===" << std::endl;
    ScavTrap scav("Scav-01");

    std::cout << "\n=== ACTIONS ===" << std::endl;
    scav.attack("Demon");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n=== COPY ===" << std::endl;
    ScavTrap copy(scav);
    copy.attack("Demon");

    std::cout << "\n=== DESTROY ===" << std::endl;
    // destruição automática no fim do scope
}