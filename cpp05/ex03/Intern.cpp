/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:26:27 by mravera           #+#    #+#             */
/*   Updated: 2023/07/28 14:54:29 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {

	this->formForm[0] = "presidential pardon";
	this->formForm[1] = "robotomy request";
	this->formForm[2] = "shrubbery creation";
	std::cout << "+ Default Intern constructor called" << std::endl;
	return ;
}

Intern::Intern( Intern const & src ) {

	*this = src;
	std::cout << "+(=) Copy Intern constructor called" << std::endl;
	return ;
}

Intern &	Intern::operator=( Intern const & rhs ) {

	this->formForm[0] = rhs.formForm[0];
	this->formForm[1] = rhs.formForm[1];
	this->formForm[2] = rhs.formForm[2];
	return (*this);
}

Intern::~Intern( void ) {

	std::cout << "- Default Intern destructor called" << std::endl;
	return ;
}

AForm* Intern::newPPF(std::string target) {

	return (new PresidentialPardonForm(target));
}

AForm* Intern::newRRF(std::string target) {

	return (new RobotomyRequestForm(target));
}

AForm* Intern::newSCF(std::string target) {

	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(std::string form, std::string target) {

	typedef	AForm*	(Intern::*fptr)(std::string);

	fptr	newForm[3] = {&Intern::newPPF, &Intern::newRRF, &Intern::newSCF};
	for (int i = 0; i < 3; i++) {
		if (form == formForm[i]) {
			std::cout << "Intern creates " << formForm[i] << std::endl;
			return (this->*newForm[i])(target);
		}
	}
	std::cout << "Requested form does not seem to exist." << std::endl;
	return (NULL);
}
