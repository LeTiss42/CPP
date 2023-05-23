/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/05/23 12:10:22 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("defaultBureaucrat"), _grade(150) {

	std::cout << "+ Default Bureaucrat constructor called (" << this->_name << ")" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string str) : _name(str), _grade(150) {

	std::cout << "+ parametric Bureaucrat constructor called (" << this->_name << ")" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string str, int grade) : _name(str) {

	std::cout << "+ parametric Bureaucrat constructor called (" << this->_name << ")" << std::endl;
	try {
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (GradeTooLowException& l) {
		std::cout << l.low() << "Requested grade for " << this->_name << " is too low, grade set to 150 (min)." << std::endl;
		this->_grade = 150;
		return ;
	}
	catch (GradeTooHighException& h) {
		std::cout << h.high() << "Requested grade for " << this->_name << " is too high, grade set to 1 (max)." << std::endl;
		this->_grade = 1;
	}
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name) {

	*this = src;
	std::cout << "+(=) Copy Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "- Default Bureaucrat destructor called (" << this->_name << ")" << std::endl;
	return ;
}

std::string		Bureaucrat::getName( void ) const {

	return(this->_name);
}

int	Bureaucrat::getGrade( void ) const {

	return(this->_grade);
}

void	Bureaucrat::incGrade( void ) {

	try {
		if (this->_grade > 1)
			this->_grade--;
		else
			throw GradeTooHighException();
		return ;
	}
	catch (GradeTooHighException &h) {
		std::cout << h.high() << this->_name << " has already max grade ()." << std::endl;
	}
}

void	Bureaucrat::decGrade( void ) {

	try
	{
		if (this->_grade < 150)
			this->_grade--;
		else
			throw GradeTooLowException();
		return ;
	}
	catch (GradeTooLowException &l) {
		std::cout << l.low() << this->_name << " has already min grade (150)." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::high(void) const throw() {

	return ("Error. Grade is too high.\n");
}

const char* Bureaucrat::GradeTooLowException::low(void) const throw() {

	return ("Error. Grade is too low.\n");
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
