/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:07:27 by mravera           #+#    #+#             */
/*   Updated: 2023/06/13 13:20:05 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitChange::BitChange(void) : _filename("data.csv") {

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

int	BitChange::readCsv(void) {

	std::fstream	myfile;
	std::string		buff;
	std::string		dateSet = "0123456789-";
	std::string		valueSet = "0123456789.";

	myfile.open(this->_filename, std::ios::in);
	if (myfile.is_open() && std::getline(myfile, buff)) {
		while(std::getline(myfile, buff))
			this->_data[std::string(buff, 0, buff.find_first_not_of(dateSet))] = std::string(buff, (buff.find_last_not_of(valueSet) + 1), std::string::npos);
	}
	else {
		std::cout << "Error in function readCsv() => " << strerror(errno) << std::endl;
		return 1;
	}
	std::cout << std::endl << "---data---" << std::endl;
	for (std::map<std::string, std::string>::iterator it = _data.begin(); it != _data.end(); it++)
		std::cout << it->first << " - " << it->second << std::endl;
	return 0;
}
