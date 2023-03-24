/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:22:23 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:41:46 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	this->type = "Cat";
	std::cout << "++ Default Cat constructor called (" << this->type << ")" << std::endl;
	return ;
}

Cat::Cat( Cat const & src ) {

	*this = src;
	std::cout << "++(=) Copy Cat constructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

Cat::~Cat( void ) {

	std::cout << "-- Default Cat destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou Miaou!" << std::endl;
	return ;
}
