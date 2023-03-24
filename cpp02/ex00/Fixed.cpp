/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 17:02:25 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : val(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits( int const raw ) {

	this->val = raw;
	return ;
}

Fixed &		Fixed::operator=( Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->val = rhs.getRawBits();
	return *this;
}
