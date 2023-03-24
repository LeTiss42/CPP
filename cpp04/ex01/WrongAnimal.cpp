/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:55:14 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("defaultWrongAnimal") {

	std::cout << "+ Default WrongAnimal constructor called (" << this->type << ")" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	*this = src;
	std::cout << "+(=) Copy WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "- Default WrongAnimal destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "Bonjour, je ne suis qu'un WrongAnimal, je suis incapable " << std::endl;
	std::cout << "de parler avec vous et je suis fort desole de cela..." << std::endl;
	return ;
}

std::string		WrongAnimal::getType( void ) const {

	return(this->type);
}
