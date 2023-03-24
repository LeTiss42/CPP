/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:01:25 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 15:27:53 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("DefaultClap"), _hp( 10 ), _maxhp( 10 ), _ep( 10 ), _ad( 0 ) {

	std::cout << "+ ClapTrap default constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	*this = src;
	std::cout << "+(=) Copy constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "- Default constructor called (" << this->_name << ")" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hp ( 10 ), _maxhp( 10 ), _ep( 10 ), _ad( 0 ) {

	std::cout << "+(s) Parametric constructor called (" << this->_name << ")" << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target ) {

	if (( this->_hp > 0 ) && ( this->_ep > 0 ))
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << this->_name << " now has " << this->_ep << " energy points" << std::endl;
	}
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack because he's dead..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ClapTrap " << this->_name << " has not enough energy point to attack..." << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount) {

	if (this->_hp <= 0)
		std::cout << this->_name << " is already dead!" << std::endl;
	else
	{
		std::cout << this->_name << " take " << amount << " damage!" << std::endl;
		this->_hp -= amount;
		if (this->_hp < 0)
			this->_hp = 0;
		if (this->_hp <= 0)
			std::cout << this->_name << " is now dead... rip!" << std::endl;
		else
			std::cout << this->_name << " now has " << this->_hp << " health points!" << std::endl;
	}
	return ;
}
	
void	ClapTrap::beRepaired( unsigned int amount ) {

	if (( this->_hp > 0 ) && ( this->_ep > 0 ))
	{
		std::cout << this->_name << " repaired " << amount << " health points!" << std::endl;
		this->_ep--;
		this->_hp += amount;
		if (this->_hp > _maxhp)
			this->_hp = _maxhp;
		std::cout << this->_name << " now has " << this->_ep << " energy points and " << this->_hp << " health points!" << std::endl;
	}
	else if (this->_hp <= 0)
		std::cout << this->_name << " can't repair himself because he's dead..." << std::endl;
	else if (this->_ep <= 0)
		std::cout << this->_name << " has not enough energy points to repair himself..." << std::endl;
	return ;
}

void	ClapTrap::dispAll( void ) {
	std::cout << this->_name << " :" << std::endl;
	std::cout << "          " << this->_hp << "hp" << std::endl;
	std::cout << "          " << this->_ep << "ep" << std::endl;
	std::cout << "          " << this->_ad << "ad" << std::endl;
	return ;
}
