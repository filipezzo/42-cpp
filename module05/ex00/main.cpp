/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:41:33 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/10 13:41:33 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("Filipe", 42);
        std::cout << a << std::endl;
        for(int i = 0; i < 30; i++)
            a.incrementGrade();
         std::cout << a << std::endl;
         Bureaucrat b("Enzo", 0);
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
    
}