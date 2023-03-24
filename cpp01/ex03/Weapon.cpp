/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:17:38 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 23:41:42 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string x) : type(x) {

	std::cout <<  "+ Weapon " << this->type << " constructor called!" << std::endl;
	return ;
}

Weapon::~Weapon( void ) {

	std::cout << "- Weapon " << this->type << " destructor called!" << std::endl;
	return ;
}

std::string const & Weapon::getType( void ) const {

	return (this->type) ;
}

void	Weapon::setType( std::string type) {

	if (!type.empty())
		this->type = type;
	else
		std::cout << "Weapon type can not be empty, pls try again!" << std::endl;
	return ;
}