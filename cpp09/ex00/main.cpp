/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/19 11:57:52 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {

	(void)argv;
	if (argc == 2) {
		BitChange btc;

		btc.exchange(argv[1]);
	}
	else
		std::cout << "This program needs exactly one file as argument" << std::endl;
	return 0;
}
