/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/20 16:38:14 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"



int	Rpn::exec(std::string str) {

	std::istringstream	ss(str);
	std::string			buf;
	int					i = 0;

	while (ss >> buf) {
		std::cout << "[" << i++ << "] " << buf << std::endl;
		if (buf.size() != 1) {
			std::cout << "Error: this program can only handle single character numbers or tokens." << std::endl;
			return 1;
		}
		switch(Rpn::detect(buf)) {
			case 1:
				std::cout << "It's a number." << std::endl;
				this->_data.push(buf[0]);
				break;
			case 2:
				std::cout << "It's a token." << std::endl;
				Rpn::ope(buf[0]);
				break;
			case 0:
				std::cout << "Error: unknown token." << std::endl;
				break;
		}
	}
	return 0;
}

int Rpn::ope(char token) {

	std::cout << "operation oui avec: " << token << std::endl;
	return 0;
}

int Rpn::isToken(int c) {

	if(c == '+' || c == '-' || c == '*' || c == '/')
		return 1;
	return 0;
}

int	Rpn::detect(std::string str) {

	if(isdigit(str[0]))
		return 1;
	else if(isToken(str[0]))
		return 2;
	else
		return 0;
}

Rpn::Rpn(void) {

	//std::cout << "+ Rpn default constructor called" << std::endl;
	return ;
}

Rpn::Rpn(Rpn const & src) {

	*this = src;
	return ;
}

Rpn &	Rpn::operator=(Rpn const & rhs) {

	this->_data = rhs._data;
	return (*this);
}

Rpn::~Rpn(void) {

	//std::cout << "- Rpn default destructor called" << std::endl;
	return ;
}
