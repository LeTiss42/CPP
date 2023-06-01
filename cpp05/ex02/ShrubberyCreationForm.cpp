/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:14:19 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 14:05:49 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", 145, 137), target("Undefined Target") {

	std::cout << "+ Default ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), target(target) {

	std::cout << "+ parametric ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {

	*this = src;
	std::cout << "+(=) Copy ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	this->target = rhs.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	std::cout << "- Default ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

std::string ShrubberyCreationForm::getTarget(void) const {

	return(this->target);
}

void ShrubberyCreationForm::action(void) const {

	std::ofstream outFile(this->target + "_shrubbery");
	if (!outFile) {
		std::cout << "Failed to open or create " << this->target + "_shrubbery" << std::endl;
		return ;
	}
	outFile <<
"            # #### ####\n"
"        ### \\/#|### |/####\n"
"        ##\\/#/ \\||/##/_/##/_#\n"
"       ###  \\/###|/ \\/ # ###\n"
"    ##_\\_#\\_\\## | #/###_/_####\n"
"    ## #### # \\ #| /  #### ##/##\n"
"    __#_--###`  |{,###---###-~\n"
"                \\ }{\n"
"                }}{\n"
"                }}{\n"
"        akarafi {{}\n"
"       , -=-~{ .-^-. }~-=- ,\n"
	<< std::endl;
	return ;
}

