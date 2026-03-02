/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:34:48 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/02 14:37:48 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0) {
}

Fixed::Fixed(const Fixed &other) : _rawBits(other._rawBits){
}

Fixed::Fixed(int const value) {
	_rawBits = value << _fractionalBits;
}

Fixed::Fixed(float const value) {
	_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if(this != &rhs)
        this->_rawBits = rhs._rawBits;
    return *this;
}

Fixed::~Fixed(){}

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

bool Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const {
	return (other < *this);
}

bool Fixed::operator>=(const Fixed& other) const {
	return (!(*this < other));
}

bool Fixed::operator<=(const Fixed& other) const {
	return (!(other < *this));
}

bool Fixed::operator!=(const Fixed& other) const {
	return (!(*this == other));
}

Fixed Fixed::operator+(const Fixed& other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++() {
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->_rawBits++;
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_rawBits--;
	return (tmp);
}

std::ostream& operator<<(std::ostream& o, const Fixed& i) {
	return (o << i.toFloat());
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}