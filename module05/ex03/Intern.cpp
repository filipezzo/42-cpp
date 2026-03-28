/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:08:34 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/28 17:08:59 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}

Intern::~Intern() {}

AForm* Intern::createShrubbery(const std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string target) {
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPardon(const std::string target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target) {
	typedef AForm* (Intern::*FormCreator)(const std::string);
	std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	FormCreator creators[] = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPardon
	};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			return (this->*creators[i])(target);
		}
	}

	std::cout << "Error: Intern cannot create " << name << " because it doesn't exist." << std::endl;
	return NULL;
}