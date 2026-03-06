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

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("generic AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
    std::cout << "AAnimal argument constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }

    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

const std::string &AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::setType(const std::string &type)
{
    this->_type = type;
}