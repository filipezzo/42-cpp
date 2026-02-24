#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _secret;
    bool _isValidInput(const std::string &str) const;
    std::string _formatField(const std::string &str) const;

public:
    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string secret);

    void displaySummary(int index);
    void displayFull() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;

    bool setFirstName(const std::string &firstName);
    bool setLastName(const std::string &lastName);
    bool setNickname(const std::string &nickname);
    bool setPhoneNumber(const std::string &phoneNumber);
    bool setSecret(const std::string &secret);
};

#endif