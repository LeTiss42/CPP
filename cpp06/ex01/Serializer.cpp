/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:33:08 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 18:54:13 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) {

	std::cout << "+ Default Serializer constructor called" << std::endl;
	return ;
}

Serializer::Serializer( Serializer const & src ) {

	*this = src;
	std::cout << "+(=) Copy Serializer constructor called" << std::endl;
	return ;
}

Serializer &	Serializer::operator=( Serializer const & rhs ) {

	(void) rhs;
	return (*this);
}

Serializer::~Serializer( void ) {

	std::cout << "- Default Serializer destructor called" << std::endl;
	return ;
}

uintptr_t	Serializer::serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data*>(raw));
}
