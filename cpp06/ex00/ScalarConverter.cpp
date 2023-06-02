/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:33:08 by mravera           #+#    #+#             */
/*   Updated: 2023/06/02 21:15:02 by mravera          ###   ########.fr       */
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
		std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
	}
	std::cout << s << " = " << ScalarConverter::getType(s) << std::endl;
	return ;
}

int	ScalarConverter::isChar(std::string s) {

	if ((s.size() == 1) && (std::isprint(s[0]) == 1) && (std::isdigit(s[0]) == 0))
		return (1);
	else
		return (0);
}

//retourne le type de s : 1=char 2=int 3=float 4=double 0=error
int	ScalarConverter::getType(std::string s) {

	if (ScalarConverter::isChar(s) == 1)
		return 1;
	if ((s.find_first_not_of("0123456789") == std::string::npos) ||
		((s.size() > 1) && (s[0] == '-') && s.find_first_not_of("0123456789", 1) == std::string::npos))
		return 2;
	if (((s.find_first_not_of("0123456789") == s.find_last_not_of("0123456789")) && (s[s.find_first_not_of("0123456789")] == '.')) ||
		((s[s.find_first_not_of("0123456789")] == '-') && (s.find_first_not_of("0123456789", 1) == s.find_last_not_of("0123456789")) && (s[s.find_last_not_of("0123456789")] == '.')))
		return 4;
	return (0);
}
