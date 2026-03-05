/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:16:54 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 17:23:00 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongDog : public WrongAnimal {
	private:
		Brain *_brain;
	public:
		WrongDog();
		WrongDog(const WrongDog& other);
		WrongDog& operator=(const WrongDog& other);
		~WrongDog();
		void makeSound(void) const;
};