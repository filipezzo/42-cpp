/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:36:55 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/28 16:40:09 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>

int	main() {

	std::srand(std::time(NULL));

	std::cout << "========== TESTE 1: O CAMINHO DO SUCESSO ==========" << std::endl;
	try {
		Bureaucrat president("Zaphod", 1);
		ShrubberyCreationForm shrub("Jardim");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Ford Prefect");

		std::cout << president << std::endl;

		president.signForm(shrub);
		president.signForm(robot);
		president.signForm(pardon);

		std::cout << std::endl;

		president.executeForm(shrub);
		std::cout << std::endl;
		president.executeForm(robot);
		std::cout << std::endl;
		president.executeForm(pardon);

	} catch (std::exception &e) {
		std::cout << "Erro inesperado no Teste 1: " << e.what() << std::endl;
	}

	std::cout << "\n========== TESTE 2: O ESTAGIÁRIO SEM PODER ==========" << std::endl;
	try {
		Bureaucrat intern("Estagiario", 150);
		RobotomyRequestForm robot("Calculon");

		std::cout << intern << std::endl;
		std::cout << robot << std::endl;

		intern.signForm(robot);

		intern.executeForm(robot);

	} catch (std::exception &e) {
		std::cout << "Capturado no Main: " << e.what() << std::endl;
	}

	std::cout << "\n========== TESTE 3: ASSINADO MAS NÃO EXECUTÁVEL ==========" << std::endl;
	try {
		Bureaucrat signer("Assinador", 70);
		Bureaucrat executor("Tentador", 50);
		RobotomyRequestForm robot("Wall-E");

		signer.signForm(robot);
		executor.executeForm(robot);

	} catch (std::exception &e) {
		std::cout << "Capturado no Main: " << e.what() << std::endl;
	}

	std::cout << "\n========== TESTE 4: EXECUTAR SEM ASSINAR ==========" << std::endl;
	try {
		Bureaucrat boss("Big Boss", 1);
		PresidentialPardonForm pardon("Arthur Dent");
		boss.executeForm(pardon);

	} catch (std::exception &e) {
		std::cout << "Capturado no Main: " << e.what() << std::endl;
	}

	return 0;
}