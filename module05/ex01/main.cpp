/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:47:08 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/10 15:47:09 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


int main(void)
{
    Bureaucrat b("Filipe", 42);
    Form a("42 form", 42, 150);
    Form c("Important form", 2, 50);

    std::cout << b << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;

    b.signForm(a);
    b.signForm(c);

    std::cout << a << std::endl;
    std::cout << c << std::endl;

    return 0;
}