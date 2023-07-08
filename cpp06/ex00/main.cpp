/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/07/08 16:53:02 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int argc, char *argv[]) {

	if (argc == 2) {
		ScalarConverter::convert(argv[1]);
	}
	else {
		ScalarConverter::convert("0");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("nan");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("nanf");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("-inff");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("+inff");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("-inf");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("+inf");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("42.0f");
		std::cout << "----------" << std::endl;
		ScalarConverter::convert("42.0");
	}
	return 0;
}
