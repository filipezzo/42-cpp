/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:37:26 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/03 15:37:26 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("FilipeTrap");
    ClapTrap b("BotTrap");

    a.setAttackDamage(3);

    a.attack("BotTrap");
    b.takeDamage(a.getAttackDamage());

    b.beRepaired(5);

    for (int i = 0; i < 12; i++)
        a.attack("dummy");

    b.takeDamage(999);
    b.attack("someone");
    b.beRepaired(10);

    ClapTrap c(a);
    ClapTrap d;
    d = a;

    return 0;
}