/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:07:27 by mravera           #+#    #+#             */
/*   Updated: 2023/06/12 15:39:40 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitChange::BitChange(void) {

	std::cout << "+ BitChange default constructor called" << std::endl;
	return ;
}

BitChange::BitChange(std::string filename) : _filename(filename) {

	std::cout << "+ BitChange parametric constructor called" << std::endl;
	return ;
}

BitChange::BitChange(BitChange const & src) {

	*this = src;
	return ;
}

BitChange &	BitChange::operator=(BitChange const & rhs) {

	this->_data = rhs._data;
	return *this;
}

BitChange::~BitChange(void) {

	std::cout << "- BitChange default destructor called" << std::endl;
	return ;
}

int	BitChange::readData(void) {

	std::fstream	myfile;
	std::string		buff;
	int				i = 0;

	myfile.open(this->_filename, std::ios::in);
	if (myfile.is_open()) {
		while(getline(myfile, buff))
			std::cout << i++ << " : [" << buff << "]" << std::endl;
	}
	else {
		std::cout << "Error in function readData() => " << strerror(errno) << std::endl;
		return 1;
	}
	return 0;
}
