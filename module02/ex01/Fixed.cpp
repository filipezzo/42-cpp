/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:34:48 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/02 13:55:27 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other) : _rawBits(other._rawBits){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value << _fractionalBits;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &rhs)
        this->_rawBits = rhs._rawBits;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_rawBits;
}

void Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->getRawBits()) / (float)(1 << _fractionalBits);
}

int Fixed::toInt() const {
	return (this->getRawBits() >> 8);
}

std::ostream& operator<<(std::ostream& o, const Fixed& i) {
	return (o << i.toFloat());
}