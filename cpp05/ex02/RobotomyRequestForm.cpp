/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:30:38 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 12:54:42 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 72, 45), target("Undefined Target") {

	std::cout << "+ Default RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45), target(target) {

	std::cout << "+ parametric RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {

	*this = src;
	std::cout << "+(=) Copy RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	this->target = rhs.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	std::cout << "- Default RobotomyRequestForm destructor called" << std::endl;
	return ;
}

std::string RobotomyRequestForm::getTarget(void) const {

	return(this->target);
}

void RobotomyRequestForm::action(void) const {

	srand(time(0));
	if (rand() & 1) {
		std::cout << "BZZZZZZ! *bruit de perceuse*" << std::endl;
		std::cout << this->target << " has been successfully robotomized!" << std::endl;
	}
	else
		std::cout << "Failed to robotomize " << this->target << std::endl;
	return ;
}

