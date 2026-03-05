/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:14:30 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:38:38 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Default WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type){
	std::cout << "Wrong Animal argument constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): _type(other._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (this->_type);
}

void WrongAnimal::setType(const std::string& type) {
	this->_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound: rufruf " << std::endl;
}