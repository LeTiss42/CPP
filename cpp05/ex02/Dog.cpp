/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:22:40 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 21:20:26 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "++ Default Dog constructor called (" << this->type << ")" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
	return ;
}

Dog::Dog( Dog const & src ) {

	std::cout << "++(=) Copy Dog constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain;
	*this->_brain = *src._brain;
	return ;
}

Dog &	Dog::operator=( Dog const & rhs ) {

	this->type = rhs.type;
	delete (this->_brain);
	this->_brain = new Brain;
	*this->_brain = *rhs._brain;
	return (*this);
}

Dog::~Dog( void ) {

	delete this->_brain;
	std::cout << "-- Default Dog destructor called (" << this->type << ")" << std::endl;
	return ;
}

void	Dog::makeSound( void ) const {

	std::cout << "WOOF WOOF!" << std::endl;
	return ;
}

void	Dog::setIdea( int i, std::string idea) {

	if ((i < 0) || (i >= 100))
	{
		std::cout << "Index out of brain" << std::endl;
		return ;
	}
	this->_brain->ideas[i] = idea;
	return ;
}

std::string	Dog::getIdea( int i ) {

	if ((i < 0) || (i >= 100))
		return "Index out of brain";
	return(this->_brain->ideas[i]);
}

Brain*	Dog::getBrainPtr( void ) {

	return (this->_brain);
}
