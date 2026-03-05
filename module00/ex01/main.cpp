/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:56:00 by fsousa            #+#    #+#             */
/*   Updated: 2026/02/25 11:56:01 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <cstdlib>

std::string getValidInput(const std::string &prompt)
{
    std::string input;
    while (true)
    {
        std::cout << prompt << ": ";
        if (!std::getline(std::cin, input))
        {
            std::cout << "Error getting the input \n";
            exit(0);
        }
        if (!input.empty())
            return input;
        std::cout << "Error: Invalid field! Please try again" << std::endl;
    }
}
int main(void)
{
    std::string option;
    PhoneBook phonebook;

    while (true)
    {
        std::cout << "Please type ADD, SEARCH OR EXIT" << std::endl;
        std::getline(std::cin, option);
        if (option == "ADD")
        {
            Contact newContact;

            newContact.setFirstName(getValidInput("First name"));
            newContact.setLastName(getValidInput("Last name"));
            newContact.setNickname(getValidInput("Nickname"));
            newContact.setPhoneNumber(getValidInput("Phone number"));
            newContact.setSecret(getValidInput("Darkest secret"));
            phonebook.createContact(newContact);
            std::cout << "Contact added with success" << std::endl;
        }
        else if (option == "SEARCH")
        {
            phonebook.displayAll();
            std::string indexStr = getValidInput("Enter index to display details");
            phonebook.displayContact(indexStr);
        }
        else if (option == "EXIT")
            break;
        else
            std::cout << "Invalid option" << std::endl;
    }
}