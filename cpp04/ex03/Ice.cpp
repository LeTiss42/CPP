/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:12:55 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 15:52:07 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {

	std::cout << "++ Default Ice constructor called (" << this->type << ")" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) {

	*this = src;
	std::cout << "++(=) Copy Ice constructor called" << std::endl;
	return ;
}

Ice &	Ice::operator=(Ice const & rhs) {

	this->type = rhs.type;
	return (*this);
}

Ice::~Ice(void) {

	std::cout << "-- Default Ice destructor called (" << this->type << ")" << std::endl;
	return ;
}

Ice* Ice::clone() const {

	Ice* res = new(Ice);
	return(res);
}
