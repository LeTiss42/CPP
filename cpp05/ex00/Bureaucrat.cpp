/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/05/09 17:01:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("defaultBureaucrat"), _grade(150) {

	std::cout << "+ Default Bureaucrat constructor called (" << this->_name << ")" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string str) : _name(str) {

	std::cout << "+ parametric Bureaucrat constructor called (" << this->_name << ")" << std::endl;
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
