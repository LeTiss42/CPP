/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/06/02 21:07:20 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int argc, char *argv[]) {

	(void)argc;
	if (argc == 2) {
		ScalarConverter::convert(argv[1]);
		std::cout << argv[1] << " = " << atof(argv[1]) << std::endl;
	}
	return 0;
}
