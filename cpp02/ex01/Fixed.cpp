/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 18:29:51 by mravera          ###   ########.fr       */
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

Fixed::Fixed( int const x ) {

	std::cout << "Int constructor called" << std::endl;
	this->val = (x << this->nbbit);
	return ;
}

Fixed::Fixed( float const f) {

	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(f * (1 << this->nbbit));
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const {

	return (this->val);
}

void	Fixed::setRawBits( int const raw ) {

	this->val = raw;
	return ;
}

float	Fixed::toFloat( void ) const {

	float	res;
	res = ((float)this->val / ((float)(1 << this->nbbit)));
	return ( res );
}

int		Fixed::toInt( void ) const {

	int	res;
	res = (this->val >> this->nbbit);
	return ( res );
}

Fixed &		Fixed::operator=( Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->val = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {

	o << rhs.toFloat();
	return o;
}
