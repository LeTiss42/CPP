/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:55:31 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 19:50:020:02ravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	std::cout << "+ FragTrap default constructor called (" << this->_name << ")" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) {

	*this = src;
	std::cout << "+(=) FragTrap copy constructor called (" << this->_name << ")" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_maxhp = rhs._maxhp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {

	this->_hp = 100;
	this->_maxhp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "+(s) FragTrap parametric constructor called (" << this->_name << ")" << std::endl;
	return ;
}

FragTrap::~FragTrap( void ) {

	std::cout << "- FragTrap default destructor called (" << this->_name << ")" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "FragTrap " << this->_name << " wants to highfive you!" << std::endl;
	return ;
}
