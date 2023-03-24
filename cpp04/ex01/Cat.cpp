/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:22:23 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 21:20:03 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "++ Default Cat constructor called (" << this->type << ")" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat( Cat const & src ) {

	std::cout << "++(=) Copy Cat constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain;
	*this->_brain = *src._brain;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	this->type = rhs.type;
	delete (this->_brain);
	this->_brain = new Brain;
	*this->_brain = *rhs._brain;
	return (*this);
}

Cat::~Cat( void ) {

	delete this->_brain;
	std::cout << "-- Default Cat destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou Miaou!" << std::endl;
	return ;
}

void	Cat::setIdea( int i, std::string idea) {

	if ((i < 0) || (i >= 100))
	{
		std::cout << "Index out of brain" << std::endl;
		return ;
	}
	this->_brain->ideas[i] = idea;
	return ;
}

std::string	Cat::getIdea( int i ) {

	if ((i < 0) || (i >= 100))
		return "Index out of brain";
	return(this->_brain->ideas[i]);
}

Brain*	Cat::getBrainPtr( void ) {

	return (this->_brain);
}
