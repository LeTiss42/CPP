/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:40:22 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("defaultAnimal") {

	std::cout << "+ Default Animal constructor called (" << this->type << ")" << std::endl;
	return ;
}

Animal::Animal( Animal const & src ) {

	*this = src;
	std::cout << "+(=) Copy Animal constructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=( Animal const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

Animal::~Animal( void ) {

	std::cout << "- Default Animal destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	Animal::makeSound( void ) const {

	std::cout << "Bonjour, je ne suis qu'un animal, je suis incapable " << std::endl;
	std::cout << "de parler avec vous et je suis fort desole de cela..." << std::endl;
	return ;
}

std::string		Animal::getType( void ) const {

	return(this->type);
}
