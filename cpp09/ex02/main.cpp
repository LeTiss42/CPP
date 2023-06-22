/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/22 12:26:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc == 2) {
		int	i = 0;

		(void)argv;
		std::cout << "----- PmergeMe -----" << std::endl;
		while(i <= 20) {
			PmergeMe	a;
			std::cout << a.jacob(i) << ", ";
			i++;
		}
	}
	else
		std::cout << "This program needs exactly one string as argument" << std::endl;
	std::cout << "----- THE END! -----" << std::endl;
	return 0;
}
