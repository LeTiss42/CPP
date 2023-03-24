/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:11:44 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 15:39:47 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) {

	this->_name = "DefaultScav";
	this->_hp = 100;
	this->_maxhp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "+ ScavTrap default constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	*this = src;
	std::cout << "+(=) ScavTrap copy constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_maxhp = rhs._maxhp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

ScavTrap::ScavTrap( std::string name ) {

	this->_name = name;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "+(s) ScavTrap parametric constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "- ScavTrap default destructor called (" << this->_name << ")" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& target ) {

	if (( this->_hp > 0 ) && ( this->_ep > 0 ))
	{
		std::cout << "ScavTrap " << this->_name << " bonks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << this->_name << " now has " << this->_ep << " energy points" << std::endl;
	}
	else if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " can't attack because he's dead..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ScavTrap " << this->_name << " has not enough energy point to attack..." << std::endl;
	return ;
}

void	ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << this->_name << " est entre en mode Gate keeper!!" << std::endl;
	return ;
}
