/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:26:26 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/05 17:29:44 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "===== TESTE EX01 =====" << std::endl;

	const int numAnimals = 4;
	Animal *animals[numAnimals];

	std::cout << "--- Criating animals ---" << std::endl;
	for (int k = 0; k < numAnimals; k++)
	{
		if (k < numAnimals / 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	std::cout << std::endl
			  << "--- Testing sounds ---" << std::endl;
	for (int k = 0; k < numAnimals; k++)
	{
		animals[k]->makeSound();
	}

	std::cout << std::endl
			  << "--- Deleting animals---" << std::endl;
	for (int k = 0; k < numAnimals; k++)
	{
		delete animals[k];
	}
	std::cout << std::endl;

	std::cout << "1. Criando cachorro original:" << std::endl;
	Dog *originalDog = new Dog();

	originalDog->getBrain()->setIdea(0, "Leeeeeeepo");

	std::cout << "\n2. Creating copy:" << std::endl;
	Dog *copyDog = new Dog(*originalDog);

	std::cout << "\n3. Deletando original:" << std::endl;
	delete originalDog;

	std::cout << "\n4. Testando a cópia:" << std::endl;
	copyDog->makeSound();

	std::cout << "\n5. Deletando cópia:" << std::endl;
	delete copyDog;
	return 0;
}