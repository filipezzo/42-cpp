/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:36:55 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/28 17:10:42 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <ctime>

int main() {
	Intern someRandomIntern;
	Bureaucrat boss("Big Boss", 1);
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf) {
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf; 
	}

	rrf = someRandomIntern.makeForm("form inexistente", "target");
	
}