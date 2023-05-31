/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:48:14 by mravera           #+#    #+#             */
/*   Updated: 2023/05/31 14:27:08 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", 25, 5), target("Undefined Target") {

	std::cout << "+ Default PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", 25, 5), target(target) {

	std::cout << "+ parametric PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {

	*this = src;
	std::cout << "+(=) Copy PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	this->target = rhs.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	std::cout << "- Default PresidentialPardonForm destructor called" << std::endl;
	return ;
}

std::string PresidentialPardonForm::getTarget(void) const {

	return(this->target);
}

void PresidentialPardonForm::action(void) const {

	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
