/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 11:57:20 by mravera          ###   ########.fr       */
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
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
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

	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::decGrade( void ) {

	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {

	return ("Error. Grade is too high.\n");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {

	return ("Error. Grade is too low.\n");
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
