/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:47 by fsousa            #+#    #+#             */
/*   Updated: 2026/02/25 11:55:48 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        for (size_t j = 0; j < str.length(); j++)
            std::cout << (char)std::toupper(str[j]);
        if (i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}