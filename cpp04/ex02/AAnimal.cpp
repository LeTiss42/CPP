/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 23:31:13 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("defaultAAnimal") {

	std::cout << "+ Default AAnimal constructor called (" << this->type << ")" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & src ) {

	*this = src;
	std::cout << "+(=) Copy AAnimal constructor called" << std::endl;
	return ;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

AAnimal::~AAnimal( void ) {

	std::cout << "- Default AAnimal destructor called (" << this->type << ")" << std::endl;
	return ;
}

/*
void	AAnimal::makeSound( void ) const {

	std::cout << "Bonjour, je ne suis qu'un AAnimal, je suis incapable " << std::endl;
	std::cout << "de parler avec vous et je suis fort desole de cela..." << std::endl;
	return ;
}
*/

std::string		AAnimal::getType( void ) const {

	return(this->type);
}
