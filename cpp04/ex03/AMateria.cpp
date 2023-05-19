/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:03:40 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 11:38:55 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("defaultAMateria") {

	std::cout << "+ Default AMateria constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src) {

	*this = src;
	std::cout << "+(=) Copy AMateria constructor called" << std::endl;
	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {

	this->type = rhs.type;
	return (*this);
}

AMateria::~AMateria(void) {

	std::cout << "- Default AMateria destructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : type(type) {

	std::cout << "+ Default AMateria constructor called with type = " << this->type << std::endl;
	return ;
}

std::string	const & AMateria::getType() const {

	return(this->type);
}
