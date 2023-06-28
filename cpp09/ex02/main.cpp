/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/28 18:09:22 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	std::clock_t	start;

	start = std::clock();
	PmergeMe a;
	a.execVector(argc, argv);
	start = std::clock() - start;
	std::cout << "Temps de process de vector is " << start * 10000 << std::endl; 

	return 0;
}
