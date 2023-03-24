/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 23:04:09 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal( void ) : type("defaultWrongAAnimal") {

	std::cout << "+ Default WrongAAnimal constructor called (" << this->type << ")" << std::endl;
	return ;
}

WrongAAnimal::WrongAAnimal( WrongAAnimal const & src ) {

	*this = src;
	std::cout << "+(=) Copy WrongAAnimal constructor called" << std::endl;
	return ;
}

WrongAAnimal &	WrongAAnimal::operator=( WrongAAnimal const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

WrongAAnimal::~WrongAAnimal( void ) {

	std::cout << "- Default WrongAAnimal destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	WrongAAnimal::makeSound( void ) const {

	std::cout << "Bonjour, je ne suis qu'un WrongAAnimal, je suis incapable " << std::endl;
	std::cout << "de parler avec vous et je suis fort desole de cela..." << std::endl;
	return ;
}

std::string		WrongAAnimal::getType( void ) const {

	return(this->type);
}
