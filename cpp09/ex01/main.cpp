/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:05:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/20 19:49:48 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Rpn.hpp"

int main(int argc, char **argv) {

	(void)argv;
	if (argc == 2) {
		Rpn	rpn;

		//std::cout << "----- RPN -----" << std::endl;
		rpn.exec(argv[1]);
	}
	else
		std::cout << "This program needs exactly one string as argument" << std::endl;
	//std::cout << "----- THE END! -----" << std::endl;
	return 0;
}
