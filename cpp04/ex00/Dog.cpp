/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:22:40 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:41:57 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	this->type = "Dog";
	std::cout << "++ Default Dog constructor called (" << this->type << ")" << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) {

	*this = src;
	std::cout << "++(=) Copy Dog constructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=( Dog const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

Dog::~Dog( void ) {

	std::cout << "-- Default Dog destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	Dog::makeSound( void ) const {

	std::cout << "WOOF WOOF!" << std::endl;
	return ;
}
