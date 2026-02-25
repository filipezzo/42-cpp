#include "Zombie.hpp"

int main(void)
{

    Zombie *z = newZombie("Negan");
    z->announce();
    randomChump("Daryl");
    delete z;

    return 0;
}