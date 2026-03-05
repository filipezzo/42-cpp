/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:56:03 by fsousa            #+#    #+#             */
/*   Updated: 2026/02/25 11:56:04 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : _index(0), _count(0) {};

void PhoneBook::createContact(Contact newContact)
{
    this->_contacts[this->_index] = newContact;
    this->_index = (this->_index + 1) % 8;
    if (this->_count < 8)
        this->_count++;
}

int PhoneBook::getCount() const
{
    return this->_count;
}

void PhoneBook::displayAll()
{
    for (int i = 0; i < this->_count; i++)
        this->_contacts[i].displaySummary(i);
}

void PhoneBook::displayContact(const std::string &indexStr)
{
    if (indexStr.length() != 1 || indexStr[0] < '0' || indexStr[0] > '7')
    {
        std::cout << "Error: Index must be between 0 - 7" << std::endl;
        return;
    }
    int index = indexStr[0] - '0';
    if (index >= this->_count)
    {
        std::cout << "These contact has not been created yet" << std::endl;
        return;
    }
    this->_contacts[index].displayFull();
}