/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 15:44:03 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {

	ScavTrap	scash;
	ScavTrap	patou("pat");
	ScavTrap	cop(patou);
	std::cout << std::endl;
	scash.dispAll();
	patou.dispAll();
	std::cout << std::endl;

	patou.attack("boubou");
	patou.takeDamage(10);
	patou.beRepaired(5);
	patou.beRepaired(100);
	patou.guardGate();
	std::cout << std::endl;
	patou.dispAll();
	std::cout << std::endl;

	patou = scash;
	std::cout << std::endl;
	patou.dispAll();
	std::cout << std::endl;

	patou.takeDamage(50);
	patou.takeDamage(49);
	patou.beRepaired(10);
	patou.takeDamage(50);
	std::cout << std::endl;
	patou.dispAll();
	std::cout << std::endl;

	std::cout << std::endl;
	ClapTrap	defo("defo");
	defo.dispAll();
	defo.attack("pouet");

	return 0;
}
