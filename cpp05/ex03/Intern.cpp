/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:26:27 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 17:43:17 by mravera          ###   ########.fr       */
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

	(void) rhs;
	return (*this);
}

Intern::~Intern( void ) {

	std::cout << "- Default Intern destructor called" << std::endl;
	return ;
}

AForm* Intern::makeForm(std::string form, std::string target) const {

	for (int i = 0; i < 3; i++) {
		if (form == formForm[i]) {
			std::cout << "Intern creates " << formForm[i] << std::endl;
			switch (i) {
				case (0):
					return (new PresidentialPardonForm(target));
				case (1):
					return (new RobotomyRequestForm(target));
				case (2):
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	std::cout << "Requested form does not seem to exist." << std::endl;
	return (NULL);
}
