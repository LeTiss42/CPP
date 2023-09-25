/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/09/25 23:26:51 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "PmergeMe.hpp"

int	dispBoth(PmergeMe &a) {

	a.dispVecSimple();
	a.dispLstSimple();
	return 0;
}

int main(int argc, char **argv) {

	if(argc > 1) {
		std::clock_t	startVect;
		std::clock_t	startList;
		PmergeMe a;

		if(a.parsing(argc, argv))
			return 0;
		dispBoth(a);
		startVect = std::clock();
		a.execVector();
		startVect = std::clock() - startVect;
		startList = std::clock();
		a.execList();
		startList = std::clock() - startList;
		dispBoth(a);
		std::cout << "temps de process vector = " << startVect << std::endl;
		std::cout << "temps de process list   = " << startList << std::endl;
	}
	else
		std::cout << "This program needs at least one number" << std::endl;
	return 0;
}
