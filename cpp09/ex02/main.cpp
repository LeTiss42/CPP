/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/07/01 18:22:53 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	std::clock_t	start;

	PmergeMe a;

	if(a.parsing(argc, argv))
		return 0;

	a.dispVecSimple();
	a.dispLstSimple();

	start = std::clock();
	a.execVector();
	start = std::clock() - start;
	std::cout << "Temps de process de vector is " << start * 10000 << std::endl; 

	start = std::clock();
	a.execList();
	start = std::clock() - start;
	std::cout << "Temps de process de list is " << start * 10000 << std::endl; 

	a.dispVecSimple();
	a.dispLstSimple();
	return 0;
}
