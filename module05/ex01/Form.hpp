/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:19:13 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/10 15:33:45 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        Form &operator=(const Form &rhs);
        ~Form();
    class GradeTooLowException : public std::exception {
        public:
            const char *what() const throw();
    };
    class GradeTooHighException : public std::exception {
        public:
            const char *what() const throw();
    };
    void beSigned(const Bureaucrat &bureaucrat);
    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
};

std::ostream &operator<<(std::ostream &out, const Form &form);