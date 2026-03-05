/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:16:54 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 15:16:59 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		WrongDog(const WrongDog& other);
		WrongDog& operator=(const WrongDog& other);
		~WrongDog();
		void makeSound(void) const;
};