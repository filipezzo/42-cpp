/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:09:40 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/29 14:11:16 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <iomanip>
#include <limits>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		static void convert(const std::string& str);
};