/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:29:38 by mravera           #+#    #+#             */
/*   Updated: 2023/03/20 10:43:49by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : name(name), arme(NULL) {

	std::cout << "+ HumanB " << this->name << " constructor called!" << std::endl;
	return ;
}

HumanB::~HumanB( void ) {

	std::cout << "- HumanB " << this->name << " destructor called!" << std::endl;
	return ;
}

void	HumanB::attack( void ) {

	if (this->arme == NULL)
		std::cout << this->name << " attacks with their bare hands! " << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon &x ) {

	this->arme = &x;
	return ;
}
