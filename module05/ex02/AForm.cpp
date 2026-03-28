/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:31:14 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/28 16:27:31 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


AForm::AForm() : _name("Default form"), _isSigned(false), 
_gradeToSign(150), _gradeToExecute(150){}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute):
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
} 

AForm::AForm(const AForm &copy): _name(copy._name), _isSigned(copy._isSigned), 
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){}

AForm &AForm::operator=(const AForm &rhs)
{
    if(this != &rhs)
        this->_isSigned = rhs._isSigned;
    return *this;
}

AForm::~AForm(){}

void AForm::checkExecution(Bureaucrat const &executor) const {
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowException();
    this->_isSigned = true;
}


 const std::string &AForm::getName() const
 {
    return this->_name;
 }

 bool AForm::getIsSigned() const
 {
    return this->_isSigned;
 }

int AForm::getGradeToSign() const
 {
    return this->_gradeToSign;
 }

int AForm::getGradeToExecute() const
 {
    return this->_gradeToExecute;
 }

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Error: grade too low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Error: grade too high";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form not signed");
}

 std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form " << form.getName() << " is ";
	if (form.getIsSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << form.getIsSigned() << " to sign and grade ";
	out << form.getGradeToExecute() << " to execute" << std::endl;
	return (out);
}