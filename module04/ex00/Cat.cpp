/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:19:34 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:18:51 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other){
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs){
      std::cout << "Cat copy assignment operator called" << std::endl;
    if(this != &rhs)
        Animal::operator=(rhs);
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Miau Miau Miau" << std::endl;
}