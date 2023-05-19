/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:17:58 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 17:49:13 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "+ Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const & src ) {

	*this = src;
	std::cout << "+(=) Copy Brain constructor called" << std::endl;
	return ;
}

Brain &	Brain::operator=( Brain const & rhs ) {

	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return(*this);
}

Brain::~Brain( void ) {

	std::cout << "- Default Brain destructor called" << std::endl;
	return ;
}
