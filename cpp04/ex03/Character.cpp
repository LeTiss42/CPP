/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:35:04 by mravera           #+#    #+#             */
/*   Updated: 2023/05/22 00:21:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("Philippe") {

	int i = 0;

	while (i < 4)
		inv[i++] = NULL;
	std::cout << "+ Default Character constructor called" << std::endl;
	return ;
}

Character::Character(Character const & src) {

	int	i = 0;

	while (i < 4)
		inv[i++] = NULL;
	*this=src;
	std::cout << "+(=) Copy Character constructor called" << std::endl;
	return ;
}

Character &	Character::operator=(Character const & rhs) {

	int i = 0;

	this->name = rhs.getName();
	while (i < 4)
	{
		if (inv[i] != NULL)
			delete (inv[i]);
		i++;
	}
	while (--i >= 0)
	{
		if (this->inv[i] != NULL)
			this->inv[i] = rhs.inv[i]->clone();
	}
	return (*this);
}

Character::~Character(void) {

	int i = 0;

	while (i < 4)
	{
		if (this->inv[i] != NULL)
			delete (this->inv[i]);
		i++;
	}
	std::cout << "- Default Character destructor called" << std::endl;
	return ;
}

Character::Character(std::string name) : name(name) {

	int i = 0;

	while (i < 4)
		inv[i++] = NULL;
	std::cout << "+(+) Parametric Character constructor called (" << name << ")" << std::endl;
	return ;
}

std::string const & Character::getName() const {

	return (this->name);
}

void	Character::equip(AMateria* m) {

	int i = 0;

	while ((i < 4) && (this->inv[i] != NULL))
		i++;
	if (i < 4)
		this->inv[i] = m;
	return ;
}

void	Character::unequip(int idx) {

	if ((idx >= 0) && (idx < 4))
		this->inv[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target) {

	if ((idx >= 0) && (idx < 4))
		if (this->inv[idx] != NULL)
			this->inv[idx]->use(target);
	return ;
}
