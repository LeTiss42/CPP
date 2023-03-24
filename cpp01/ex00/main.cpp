/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:31:15 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 21:43:45 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main() {
	Zombie* zptr;

	std::cout << std::endl << "-->Constructeur par default : " << std::endl;
	Zombie	Zozo("Foo");
	Zozo.announce();

	std::cout << std::endl << "-->Dispo en dehors de la fonction : " << std::endl;
	zptr = newZombie("ptrZ");
	zptr->announce();
	delete zptr;

	std::cout << std::endl << "-->Pas dispo en dehors : " << std::endl;
	randomChump("RandomZ");
	std::cout << "->main<-" << std::endl;
	//toto.announce();

	std::cout << std::endl << "-->Fin du main" << std::endl;
	return 0;
}
