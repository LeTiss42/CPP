/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/21 10:18:40 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Rpn.hpp"

int	Rpn::exec(std::string str) {

	std::istringstream	ss(str);
	std::string			buf;
	int					res = 0;

	while (ss >> buf) {
		if (buf.size() != 1) {
			std::cout << "Error: this program can only handle single character numbers or tokens." << std::endl;
			return 1;
		}
		switch(Rpn::detect(buf)) {
			case 1:
				this->_data.push(atoi(buf.c_str()));
				break;
			case 2:
				if (Rpn::ope(this->isToken(*buf.c_str())))
					return 1;
				break;
			case 0:
				std::cout << "Error: unknown token." << std::endl;
				return 1;
		}
	}
	if(this->_data.empty()) {
		std::cout << "Error." << std::endl;
		return 1;
	}
	res = this->_data.top();
	this->_data.pop();
	if(!this->_data.empty()) {
		std::cout << "Error." << std::endl;
		return 1;
	}
	std::cout << res << std::endl;
	return 0;
}

int Rpn::ope(int token) {

	int	buf;

	if(!this->_data.empty()) {
		buf = this->_data.top();
		this->_data.pop();
	}
	if(!this->_data.empty()) {
		switch(token) {
			case 1:
				buf = this->_data.top() + buf;
				break;
			case 2:
				buf = this->_data.top() - buf;
				break;
			case 3:
				buf = this->_data.top() * buf;
				break;
			case 4:
			 	if(buf == 0) {
					std::cout << "Error, division by zero." << std::endl;
					return 1;
				}
				buf = this->_data.top() / buf;
				break;
		}
	this->_data.pop();
	this->_data.push(buf);
	}
	else {
		std::cout << "Error." << std::endl;
		return 1;
	}
	return 0;
}

int Rpn::isToken(char c) {

	if (c == '+')
		return 1;
	if (c == '-')
		return 2;
	if (c == '*')
		return 3;
	if (c == '/')
		return 4;
	return 0;
}

int	Rpn::detect(std::string str) {

	if(isdigit(str[0]))
		return 1;
	else if(isToken(str[0]) != 0)
		return 2;
	else
		return 0;
}

void	Rpn::disp_stack(void) {

	std::cout << "stack content :" << std::endl;
	while(!this->_data.empty()) {
		std::cout << " " << this->_data.top();
		this->_data.pop();
	}
	std::cout << std::endl;
	return ;
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
