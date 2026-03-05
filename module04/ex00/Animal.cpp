/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:13:31 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:37:27 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("generic animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type){
    std::cout << "Animal argument constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : _type(other._type){
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs){
    if(this != &rhs)
    {
        this->_type = rhs._type;
    }

    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Animal making sound: birlllllllllllll" << std::endl;
}

const std::string &Animal::getType() const{
    return this->_type;
}

void Animal::setType(const std::string& type){
    this->_type = type;
}