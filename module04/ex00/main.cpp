/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:19:31 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 16:42:13 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "--- Correct test with virtual ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "type: " << meta->getType() << " " << std::endl;
	std::cout << "type: " << j->getType() << " " << std::endl;
	std::cout << "type: " << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "--- Wrong test: without virtual ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongDog = new WrongDog();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "type: " << wrongMeta->getType() << " " << std::endl;
	std::cout << "type: " << wrongDog->getType() << " " << std::endl;
	std::cout << "type: " << wrongCat->getType() << " " << std::endl;

	wrongMeta->makeSound();
	wrongDog->makeSound();
	wrongCat->makeSound();

	delete wrongMeta;
	delete wrongCat;

	return 0;
}