/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:17:25 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:41:43 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("WrongDog") {
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const std::string &type): WrongAnimal(type){
	  std::cout << "WrongDog argument constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other): WrongAnimal(other) {
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
	std::cout << "WrongDog copy assignment operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return (*this);
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const {
	std::cout << "WrongDog: AuAu AUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}