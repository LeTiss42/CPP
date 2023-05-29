/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:02:59 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 13:43:34 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("defaultForm"), signedUp(false), gradeSigne(100), gradeExe(100) {

	std::cout << "+ Default Form constructor called (" << this->name << ")" << std::endl;
	return ;
}

Form::Form(std::string name, int gradeSigne, int gradeExe) : name(name), gradeSigne(gradeSigne), gradeExe(gradeExe) {

	std::cout << "+ parametric Form constructor called (" << this->name << ")" << std::endl;
	this->signedUp = false;
	if ((gradeExe > 150) || (gradeSigne > 150))
		throw Form::GradeTooLowException();
	else if ((gradeExe < 1) || (gradeSigne < 1))
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form const & src) :
			name(src.getName()), signedUp(src.getSignedUp()), gradeSigne(src.getGradeSigne()), gradeExe(src.getGradeExe()) {

	*this = src;
	std::cout << "+(=) Copy Form constructor called" << std::endl;
	return ;
}

Form &	Form::operator=(Form const & rhs) {

	this->signedUp = rhs.signedUp;
	return (*this);
}

Form::~Form(void) {

	std::cout << "- Default Form destructor called (" << this->name << ")" << std::endl;
	return ;
}

std::string	Form::getName(void) const {

	return (this->name);
}

bool	Form::getSignedUp(void) const {

	return (this->signedUp);
}

int	Form::getGradeSigne(void) const {

	return (this->gradeSigne);
}

int	Form::getGradeExe(void) const {

	return (this->gradeExe);
}

void	Form::beSigned(Bureaucrat& b) {

	if (b.getGrade() > this->getGradeSigne())
		throw Form::GradeTooLowException();
	else {
		std::cout << "Form " << this->getName() << " has been signed by : " << b.getName() << std::endl;
		this->signedUp = true;
	}
	return ;
}

const char* Form::GradeTooHighException::what(void) const throw() {

	return ("Error. Grade is too high.\n");
}

const char* Form::GradeTooLowException::what(void) const throw() {

	return ("Error. Grade is too low.\n");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {

	o << "name         = " << rhs.getName() << std::endl
	  << "is signed up = " << rhs.getSignedUp() << std::endl
	  << "signe grade  = " << rhs.getGradeSigne() << std::endl
	  << "exe grade    = " << rhs.getGradeExe() << std::endl;
	return o;
}
