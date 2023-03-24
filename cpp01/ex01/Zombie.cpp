/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:57:45 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 16:02:25 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) : name("DefaultZ") {

	std::cout << "+ Zombie " << this->name << " constructor called!" << std::endl;
	return ;
}

Zombie::~Zombie( void ) {

	std::cout << "- Zombie " << this->name << " destructor called!" << std::endl;
	return ;
}

void	Zombie::announce( void ) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
	