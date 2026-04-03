/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 14:10:29 by fsousa            #+#    #+#             */
/*   Updated: 2026/04/03 15:24:20 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &str)
{
    double value;
    char *end;
    if (str.length() == 1 && !std::isdigit(str[0]))
        value = static_cast<double>(str[0]);
    else
    {
        value = std::strtod(str.c_str(), &end);
        if (*end != '\0' && std::string(end) != "f")
        {
            std::cout << "Error: Not a valid input" << std::endl;
            return;
        }
    }
    std::cout << "int: ";
    if (std::isnan(value) ||
        std::isinf(value) ||
        value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(value) << std::endl;
    
    std::cout << "char: ";
    if(std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
        std::cout << "imposibble" << std::endl;
    else if(!std::isprint(static_cast<int>(value)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value) << std::endl;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;

}