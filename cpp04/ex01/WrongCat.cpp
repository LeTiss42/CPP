/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:58:01 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:58:35 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	this->type = "WrongCat";
	std::cout << "++ Default WrongCat constructor called (" << this->type << ")" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src ) {

	*this = src;
	std::cout << "++(=) Copy WrongCat constructor called" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {

	std::cout << "-- Default WrongCat destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const {

	std::cout << "Miaou Miaou!" << std::endl;
	return ;
}
