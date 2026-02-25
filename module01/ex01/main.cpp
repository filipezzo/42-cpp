#include "Zombie.hpp"

const int N = 5;

int main(void)
{
    Zombie *theWalkingDead = zombieHorde(N, "Walker");

    for (int i = 0; i < N; i++)
        theWalkingDead[i].announce();

    delete[] theWalkingDead;
    return 0;
}