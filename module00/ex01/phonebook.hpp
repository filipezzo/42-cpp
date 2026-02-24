#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#define MAX_SIZE 8

class PhoneBook
{
private:
    Contact _contacts[MAX_SIZE];
    int _index;
    int _count;

public:
    PhoneBook();
    int getCount() const;
    void createContact(Contact newContact);
    void displayAll();
    void displayContact(const std::string &indexStr);
};

#endif