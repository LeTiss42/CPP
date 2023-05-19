/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:35:04 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 20:36:26 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("Philippe") {

	std::cout << "+ Default Character constructor called" << std::endl;
	return ;
}

Character::Character(Character const & src) {

	*this=src;
	std::cout << "+(=) Copy Character constructor called" << std::endl;
	return ;
}

Character &	Character::operator=(Character const & rhs) {

	this->name = rhs.getName();
	return (*this);
}

Character::~Character(void) {

	std::cout << "- Default Character destructor called" << std::endl;
	return ;
}

Character::Character(std::string name) : name(name) {

	std::cout << "+(+) Parametric Character constructor called (" << name << ")" << std::endl;
	return ;
}

std::string const & Character::getName() const {

	return (this->name);
}

void	Character::equip(AMateria* m) {

	std::cout << "fonction pas finie (equip " << m->getType() << ")" << std::endl;
	return ;
}

void	Character::unequip(int idx) {

	std::cout << "fonction pas finie (unequip " << idx << ")" << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter& target) {

	std::cout << "fonction pas finie (use " << idx << " sur " << target.getName() << ")" << std::endl;
	return ;
}
