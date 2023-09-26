/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/09/26 15:38:13by mravera          ###   ########.fr       */
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

int	dispArgs(int argc, char **argv) {

	std::cout << "Before:  ";
	for(int i = 1; (i < argc) && (i < 5); i++) {
		std::cout << argv[i];
		std::cout << ' ';
	}
	if(argc == 6) {
		std::cout << argv[argc - 1];
	}
	else if(argc > 6)
		std::cout << "[...]";
	std::cout << std::endl;
	return 0;
}

int main(int argc, char **argv) {

	if(argc > 1) {
		std::clock_t	timevec;
		std::clock_t	timelst;
		PmergeMe a;

		//vector
		timevec = std::clock();
		if(a.parsingvec(argc, argv))
			return 0;
		dispArgs(argc, argv);
		a.execVector();
		timevec = std::clock() - timevec;

		//list
		timelst = std::clock();
		if(a.parsinglst(argc, argv))
			return 0;
		a.execList();
		timelst = std::clock() - timelst;

		std::cout << "After:   ";
		a.dispVecSimple();
		std::cout << "Time to process a range of " << (argc - 1) << " elements with std::vector : " << (timevec / (CLOCKS_PER_SEC / 1000000)) << " usec" << std::endl;
		std::cout << "Time to process a range of " << (argc - 1) << " elements with std::list   : " << (timelst / (CLOCKS_PER_SEC / 1000000)) << " usec" << std::endl;
	}
	else
		std::cout << "This program needs at least one number" << std::endl;
	return 0;
}
