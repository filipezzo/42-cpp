/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 16:27:11 by fsousa            #+#    #+#             */
/*   Updated: 2026/04/03 14:32:03 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include <iostream>

int main() {
	Data myData = {42, "Hidani bagre."};

	uintptr_t raw = Serializer::serialize(&myData);
	Data* ptr = Serializer::deserialize(raw);

	if (&myData == ptr) {
		std::cout << "Success!" << ptr << std::endl;
		std::cout << "Name: " << ptr->name << std::endl;
	} else {
		std::cout << "Error: The convertion is not correct!" << std::endl;
	}
	return (0);
}