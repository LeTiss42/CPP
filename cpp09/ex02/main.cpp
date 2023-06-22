/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/22 23:30:50 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "This program needs exactly one string as argument" << std::endl;
		return 0;
	}
	std::cout << "----- PmergeMe -----" << std::endl;

	PmergeMe a;
	a.exec(argv[1]);

	std::cout << "----- THE END! -----" << std::endl;
	return 0;
}
