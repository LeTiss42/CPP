/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:02:59 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 15:08:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("defaultAForm"), signedUp(false), gradeSigne(100), gradeExe(100) {

	std::cout << "+ Default AForm constructor called (" << this->name << ")" << std::endl;
	return ;
}

AForm::AForm(std::string name, int gradeSigne, int gradeExe) : name(name), gradeSigne(gradeSigne), gradeExe(gradeExe) {

	std::cout << "+ parametric AForm constructor called (" << this->name << ")" << std::endl;
	this->signedUp = false;
	if ((gradeExe > 150) || (gradeSigne > 150))
		throw AForm::GradeTooLowException();
	else if ((gradeExe < 1) || (gradeSigne < 1))
		throw AForm::GradeTooHighException();
	return ;
}

AForm::AForm(AForm const & src) :
			name(src.getName()), signedUp(src.getSignedUp()), gradeSigne(src.getGradeSigne()), gradeExe(src.getGradeExe()) {

	*this = src;
	std::cout << "+(=) Copy AForm constructor called" << std::endl;
	return ;
}

AForm &	AForm::operator=(AForm const & rhs) {

	this->signedUp = rhs.signedUp;
	return (*this);
}

AForm::~AForm(void) {

	std::cout << "- Default AForm destructor called (" << this->name << ")" << std::endl;
	return ;
}

std::string	AForm::getName(void) const {

	return (this->name);
}

bool	AForm::getSignedUp(void) const {

	return (this->signedUp);
}

int	AForm::getGradeSigne(void) const {

	return (this->gradeSigne);
}

int	AForm::getGradeExe(void) const {

	return (this->gradeExe);
}

void	AForm::beSigned(Bureaucrat& b) {

	if (b.getGrade() > this->getGradeSigne())
		throw AForm::GradeTooLowException();
	else {
		std::cout << "AForm " << this->getName() << " has been signed by : " << b.getName() << std::endl;
		this->signedUp = true;
	}
	return ;
}

const char* AForm::GradeTooHighException::what(void) const throw() {

	return ("Error. Grade is too high.\n");
}

const char* AForm::GradeTooLowException::what(void) const throw() {

	return ("Error. Grade is too low.\n");
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs) {

	o << "name         = " << rhs.getName() << std::endl
	  << "is signed up = " << rhs.getSignedUp() << std::endl
	  << "signe grade  = " << rhs.getGradeSigne() << std::endl
	  << "exe grade    = " << rhs.getGradeExe() << std::endl;
	return o;
}
