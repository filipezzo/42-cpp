/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:09:58 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:14:00 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &rhs);
        ~Dog();
        void makeSound(void) const;
};
