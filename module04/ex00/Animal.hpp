/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:14:02 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:13:27 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &rhs);
        virtual ~Animal();
        virtual void makeSound() const;
        const std::string& getType() const;
		void setType(const std::string& type);
};