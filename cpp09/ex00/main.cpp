/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/13 13:10:39 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {

	(void)argv;
	if (argc == 2) {
		BitChange btc;
		std::cout << "trying to read data from requested file" << std::endl;
		btc.readCsv();
	}
	else
		std::cout << "This program needs exactly one file as argument" << std::endl;
	return 0;
}
