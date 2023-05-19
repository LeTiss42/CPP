/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:52:26 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 17:03:06 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {

	std::cout << "++ Default Cure constructor called (" << this->type << ")" << std::endl;
	return ;
}

Cure::Cure(Cure const & src) {

	*this = src;
	std::cout << "++(=) Copy Cure constructor called" << std::endl;
	return ;
}

Cure &	Cure::operator=(Cure const & rhs) {

	this->type = rhs.type;
	return (*this);
}

Cure::~Cure(void) {

	std::cout << "-- Default Cure destructor called (" << this->type << ")" << std::endl;
	return ;
}

Cure* Cure::clone() const {

	Cure* res = new(Cure);
	return(res);
}
