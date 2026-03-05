/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:17:25 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 17:25:31 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("WrongDog") {
	this->_brain = new Brain();
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other): WrongAnimal(other) {
	this->_brain = new Brain(*other._brain);
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
	std::cout << "WrongDog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

WrongDog::~WrongDog() {
	delete this->_brain;
	std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const {
	std::cout << "WrongDog: AuAu AUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}