/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:03:52 by mravera           #+#    #+#             */
/*   Updated: 2023/03/20 23:57:52by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//enum	msg {debug, info, warning, error};

Harl::Harl( void ) {

	return ;
}

Harl::~Harl( void ) {

	return ;
}

void	Harl::complain( std::string level ) {

	int	i;

	i = 0;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*msg[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (str[i] != level && i < 4) 
		i++;
	if (i > 3)
	{
		std::cout << "unknown message!" << std::endl;
		return ;
	}
	else
	{
		(this->*msg[i])();
		return ;
	}
}

void	Harl::debug( void ) {

	std::cout << "Ceci est un message de niveu DEBUG!" << std::endl;
	return ;
}

void	Harl::info( void ) {

	std::cout << "Ceci est un message de niveau INFO, ca monte gentillement!" << std::endl;
	return ;
}

void	Harl::warning( void ) {

	std::cout << "Ceci est un message de niveau WARNING, ca mousse severe!" << std::endl;
	return;
}

void	Harl::error( void ) {

	std::cout << "AIE AIE AIE CARAMBA, ceci est message de niveau ERROR, c'est dead..." << std::endl;
	return ;
}
