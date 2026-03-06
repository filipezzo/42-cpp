/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:14:02 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:34:55 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class AAnimal
{
protected:
    std::string _type;

public:
    AAnimal();
    AAnimal(const std::string &type);
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &rhs);
    virtual ~AAnimal();
    virtual void makeSound() const = 0;
    const std::string &getType() const;
    void setType(const std::string &type);
};