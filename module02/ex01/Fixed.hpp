/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:34:45 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/02 11:29:50 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _rawBits;
        static const int _fractionalBits = 8;
    public:
         Fixed(void);
         Fixed(int const value);
         Fixed(float const value);
         Fixed(const Fixed &other);
         Fixed &operator=(const Fixed &rhs);
         ~Fixed(void);
         int getRawBits(void) const;
         void setRawBits(int const raw);
         float toFloat(void) const;
         int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& i);