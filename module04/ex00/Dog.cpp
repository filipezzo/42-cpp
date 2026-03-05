/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:19:22 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:18:39 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal(){
    std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog &other): Animal(other){
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if(this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "AuAuAuAuAUAUAUAUAU" << std::endl;
}