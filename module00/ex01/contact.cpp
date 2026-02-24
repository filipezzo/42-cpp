#include "contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _secret("") {}
Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string secret)
{
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phoneNumber = phoneNumber;
    _secret = secret;
}
bool Contact::_isValidInput(const std::string &str) const
{
    return !str.empty();
}
std::string Contact::_formatField(const std::string &str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + '.';
    return str;
}

void Contact::displaySummary(int index)
{
    std::cout << "| " << std::setw(10) << index;
    std::cout << "| " << std::setw(10) << _formatField(this->_firstName);
    std::cout << "| " << std::setw(10) << _formatField(this->_lastName);
    std::cout << "| " << std::setw(10) << _formatField(this->_nickname);
    std::cout << "| " << std::setw(10) << _formatField(this->_phoneNumber);
    std::cout << "| " << std::setw(10) << _formatField(this->_secret);
    std::cout << "| " << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _secret << std::endl;
}

std::string Contact::getFirstName() const { return this->_firstName; }
std::string Contact::getLastName() const { return this->_lastName; }
std::string Contact::getNickname() const { return this->_nickname; }

bool Contact::setFirstName(const std::string &firstName)
{
    if (!this->_isValidInput(firstName))
        return false;
    this->_firstName = firstName;
    return true;
}

bool Contact::setLastName(const std::string &lastName)
{
    if (!this->_isValidInput(lastName))
        return false;
    this->_lastName = lastName;
    return true;
}

bool Contact::setNickname(const std::string &nickname)
{
    if (!this->_isValidInput(nickname))
        return false;
    this->_nickname = nickname;
    return true;
}

bool Contact::setPhoneNumber(const std::string &phoneNumber)
{
    if (!this->_isValidInput(phoneNumber))
        return false;
    this->_phoneNumber = phoneNumber;
    return true;
}

bool Contact::setSecret(const std::string &secret)
{
    if (!this->_isValidInput(secret))
        return false;
    this->_secret = secret;
    return true;
}