/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:38:09 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 15:16:52 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

void	randomChump( std::string name ) {
	std::cout << std::endl << "*** Debut de la fonction randomChump ***" << std::endl;
	Zombie	toto( name );
	toto.announce();
	std::cout << "*** Fin de la fonction randomchump ***" << std::endl;
	return ;
}
