/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 17:40:09 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	ClapTrap	clap;
	FragTrap	frag;
	ScavTrap	scav;
	std::cout << std::endl;
	clap.dispAll();
	frag.dispAll();
	scav.dispAll();
	std::cout << std::endl;

	ClapTrap	aa("aa");
	FragTrap	bb("bb");
	ScavTrap	cc("cc");
	std::cout << std::endl;
	aa.dispAll();
	bb.dispAll();
	cc.dispAll();
	std::cout << std::endl;

	ClapTrap	dd(bb);
	dd.dispAll();
	dd = aa;
	dd.dispAll();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	aa.attack("AA");
	aa.attack("NN");
	aa.takeDamage(5);
	aa.beRepaired(10);
	aa.takeDamage(10);
	aa.takeDamage(2);
	aa.beRepaired(100);
	aa.dispAll();
	std::cout << std::endl;
	std::cout << std::endl;
	bb.attack("AA");
	bb.attack("NN");
	bb.takeDamage(5);
	bb.beRepaired(10);
	bb.takeDamage(10);
	bb.takeDamage(2);
	bb.beRepaired(100);
	bb.dispAll();
	bb.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	cc.attack("AA");
	cc.attack("NN");
	cc.takeDamage(5);
	cc.beRepaired(10);
	cc.takeDamage(10);
	cc.takeDamage(2);
	cc.beRepaired(100);
	cc.dispAll();
	cc.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;



	return 0;
}
