/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:31:15 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:28:49 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main() {
	Zombie* zhorde;
	int		N;

	N = 10;
	zhorde = zombieHorde(N, "Zizou");

	for(int i = 0; i < N; i++)
		zhorde[i].announce();

	std::cout << std::endl;
	delete [] zhorde;
	std::cout << std::endl << "-->Fin du main" << std::endl;
	return 0;
}
