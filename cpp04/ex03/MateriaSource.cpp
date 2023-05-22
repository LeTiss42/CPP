/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:37:38 by mravera           #+#    #+#             */
/*   Updated: 2023/05/22 12:28:36 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria* x) {

	int i = 0;

	while ((i < 4) && (this->inv[i] != NULL))
		i++;
	if ((i < 4) && (this->inv[i] == NULL))
	{
		this->inv[i] = x;
		//std::cout << "materia " << x->getType() << " learn on slot " << i << std::endl;
	}
	//std::cout << "error learning a materia i = " << i << std::endl;

	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	int i = 0;
	AMateria*	res;

	while (i < 4)
	{
		if (this->inv[i]->getType() == type)
		{
			res = this->inv[i];
			return (res);
		}
		i++;
	}
	return (0);
}

MateriaSource::MateriaSource(void) {

	int i = 0;

	while (i < 4)
		inv[i++] = NULL;
	//std::cout << "+ Default MateriaSource constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	int i = 0;

	while (i < 4)
		inv[i++] = NULL;
	*this=src;
	//std::cout << "+(=) Copy MateriaSource constructor called" << std::endl;
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {

	int i = 0;

	while (i < 4)
	{
		this->inv[i] = rhs.inv[i];
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {

	//std::cout << "- Default MateriaSource destructor called" << std::endl;
	return ;
}
