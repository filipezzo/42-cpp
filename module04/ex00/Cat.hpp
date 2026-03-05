/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:19:37 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:12:51 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &rhs);
        ~Cat();
        void makeSound() const;
};

