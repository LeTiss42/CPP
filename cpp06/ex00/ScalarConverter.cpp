/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:33:08 by mravera           #+#    #+#             */
/*   Updated: 2023/06/02 19:39:56 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {

	std::cout << "+ Default ScalarConverter constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {

	*this = src;
	std::cout << "+(=) Copy ScalarConverter constructor called" << std::endl;
	return ;
}

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs ) {

	(void) rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter( void ) {

	std::cout << "- Default ScalarConverter destructor called" << std::endl;
	return ;
}

void ScalarConverter::convert(std::string s) {

	if (ScalarConverter::isChar(s) == 1) {
		std::cout << "char: " << s[0] << std::endl;
		std::cout << "int : " << static_cast<int>(s[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(s[0]) << std::endl;
		std::cout << "double: " << static_cast<double>(s[0]) << std::endl;
	}
	else
		std::cout << "not a char" << std::endl;
	return ;
}

int	ScalarConverter::isChar(std::string s) {

	if ((s.size() == 1) && (std::isprint(s[0]) == 1) && (std::isdigit(s[0]) == 0))
		return (1);
	else
		return (0);
}
