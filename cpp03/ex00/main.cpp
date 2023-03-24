/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 01:24:29 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	Joe("YOOO");

	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");

	std::cout << std::endl;
	Joe.takeDamage(3);
	Joe.takeDamage(3);
	Joe.takeDamage(3);

	std::cout << std::endl;
	Joe.beRepaired(8);

	std::cout << std::endl;
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	Joe.attack("toto");
	
	std::cout << std::endl;
	Joe.takeDamage(3);
	Joe.takeDamage(3);
	Joe.attack("toto");
	Joe.beRepaired(8);
	
	std::cout << std::endl;
	Joe.takeDamage(3);
	Joe.takeDamage(3);
	Joe.attack("toto");
	Joe.beRepaired(8);

	std::cout << std::endl;
	ClapTrap	Poe(Joe);
	std::cout << std::endl;
	Poe.takeDamage(3);
	Poe.takeDamage(3);
	Poe.attack("toto");
	Poe.beRepaired(8);

	std::cout << std::endl;
	ClapTrap	felix;
	felix.beRepaired(8);
	felix = Poe;
	std::cout << std::endl;
	felix.takeDamage(3);
	felix.takeDamage(3);
	felix.attack("toto");
	felix.beRepaired(8);


	return 0;
}
