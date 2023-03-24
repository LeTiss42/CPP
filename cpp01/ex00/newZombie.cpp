/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:36:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 15:33:27 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	std::cout << std::endl << "*** debut de la fonction newZombie ***" << std::endl;
	Zombie*	res = new Zombie(name);
	std::cout << "*** fin de la fonction newZombie ***" << std::endl;
	return (res);
}
