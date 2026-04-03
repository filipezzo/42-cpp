/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 16:27:11 by fsousa            #+#    #+#             */
/*   Updated: 2026/04/03 15:29:58 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <exception>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base* generate(void) {
	int r = std::rand() % 3;
	if (r == 0) {
		std::cout << "Generated: A" << std::endl;
		return new A();
	} else if (r == 1) {
		std::cout << "Generated: B" << std::endl;
		return new B();
	} else {
		std::cout << "Generated: C" << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error: Unknown type" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ; 
	} catch (const std::exception& e) {}

	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	} catch (const std::exception& e) {}

	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	} catch (const std::exception& e) {}
}

int main() {
	std::srand(std::time(NULL));

	std::cout << "--- Test 1---" << std::endl;
	Base* p1 = generate();
	identify(p1);
	identify(*p1);
	delete p1;

	std::cout << "\n--- Test 2 ---" << std::endl;
	Base* p2 = generate();
	identify(p2);
	identify(*p2);
	delete p2;

	return (0);
}