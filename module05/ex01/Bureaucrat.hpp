/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:26:33 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/10 15:34:07 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"


class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        ~Bureaucrat();

        class GradeTooLowException : public std::exception {
            public:
                const char * what() const throw();
        };
        class GradeTooHighException : public std::exception{
            public:
                const char * what() const throw();
        };
        
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        const std::string &getName() const;
        int getGrade() const;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);