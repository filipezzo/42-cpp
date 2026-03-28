/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 14:23:53 by fsousa            #+#    #+#             */
/*   Updated: 2026/03/28 15:39:36 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
 :AForm("Shrubbery Creation", 145, 137), _target("Default_target"){}
 
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
 :AForm("Shrubbery Creation", 145, 137), _target(target){}

 ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
 :AForm(other), _target(other._target){}

 ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	(void) rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	this->checkExecution(executor);
	std::string filename = _target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: Could not create file." << std::endl;
		return ;
	}
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⠤⠤⠤⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠖⠁⠀⠀⠀⠀⠀⠀⠈⠳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⢠⠞⠉⠀⠀⠀⠉⠳⣄⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡎⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡇⠀⢀⣤⣤⣀⠀⠀⠀⡇⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡇⠀⠘⠿⠿⠟⠀⠀⠀⡇⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠣⡀⠀⠀⠀⠀⠀⠀⢠⠇⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠀⠀⠙⠦⠤⠤⠤⠴⠚⠁⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⢀⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⢄⣀⠀⠀⣀⡠⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	outfile.close();
}