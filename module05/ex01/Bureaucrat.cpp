#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: grade too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: grade too high";
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{

    if (this->_grade >= 150)
        throw GradeTooLowException();
    this->_grade++;
}

const std::string &Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name 
        << " signed " << form.getName()
        << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign "
                  << form.getName() << " because "
                  << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName()
        << ", bureaucrat grade "
        << bureaucrat.getGrade();
    return out;
}