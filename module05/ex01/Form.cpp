/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:31:14 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/10 15:37:40 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default form"), _isSigned(false), 
_gradeToSign(150), _gradeToExecute(150){}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute):
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if(gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
} 

Form::Form(const Form &copy): _name(copy._name), _isSigned(copy._isSigned), 
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute){}

Form &Form::operator=(const Form &rhs)
{
    if(this != &rhs)
        this->_isSigned = rhs._isSigned;
    return *this;
}

Form::~Form(){}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Error: grade too low";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Error: grade too high";
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowException();
    this->_isSigned = true;
}


 const std::string &Form::getName() const
 {
    return this->_name;
 }

 bool Form::getIsSigned() const
 {
    return this->_isSigned;
 }

int Form::getGradeToSign() const
 {
    return this->_gradeToSign;
 }

int Form::getGradeToExecute() const
 {
    return this->_gradeToExecute;
 }

 std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form " << form.getName()
        << ", signed: " << (form.getIsSigned() ? "yes" : "no")
        << ", grade to sign: " << form.getGradeToSign()
        << ", grade to execute: " << form.getGradeToExecute();
    return out;
}