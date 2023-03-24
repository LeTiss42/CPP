/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:54:40 by mravera           #+#    #+#             */
/*   Updated: 2023/03/20 10:41:55 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon) {

	std::cout <<  "+ HumanA " << this->name << " constructor called!" << std::endl;
	return ;
}

HumanA::~HumanA( void ) {

	std::cout << "- HumanA " << this->name << " destructor called!" << std::endl;
	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}
