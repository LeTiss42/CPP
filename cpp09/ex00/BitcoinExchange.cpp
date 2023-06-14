/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:07:27 by mravera           #+#    #+#             */
/*   Updated: 2023/06/14 11:03:08by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//Default constructor take gives "data.csv" as default file name for the dataset used by the program.
BitChange::BitChange(void) : _dataSetName("data.csv") {

	//std::cout << "+ BitChange default constructor called" << std::endl;
	return ;
}

//Parametric constructor allows one to choose the dataset used by the program.
BitChange::BitChange(std::string _dataSetName) : _dataSetName(_dataSetName) {

	//std::cout << "+ BitChange parametric constructor called" << std::endl;
	return ;
}

BitChange::BitChange(BitChange const & src) {

	*this = src;
	return ;
}

BitChange &	BitChange::operator=(BitChange const & rhs) {

	this->_map = rhs._map;
	return *this;
}

BitChange::~BitChange(void) {

	//std::cout << "- BitChange default destructor called" << std::endl;
	return ;
}

void	BitChange::dispData(void) {

	std::cout << "---data---" << std::endl;
	for (BitChange::iter it = _map.begin(); it != _map.end(); it++) {
		std::cout << std::setprecision(10) << it->first << " - " << it->second << std::endl;
	}
	return ;
}

//Parse the csv file in a <int, double> type map.
//As this file is not provided by the user, it should be correct.
int	BitChange::readCsv(void) {

	int					date;
	double				value;
	std::fstream		myfile;
	std::string			buff;

	myfile.open(this->_dataSetName, std::ios::in);
	//Open the csv file and check success.
	if (myfile.is_open()) {
		//Get the first line to avoid parsing it.
		std::getline(myfile, buff);
		while(std::getline(myfile, buff))
			try {
				//old fashioned parsong with good old friend atoi.
				date = atoi(buff.substr(0, 4).c_str()) * 10000 + atoi(buff.substr(5, 2).c_str()) * 100 + atoi(buff.substr(8, 2).c_str());
				//strtof is C++11 but strtod seems to be C++98 compatible.
				value = std::strtod(buff.substr(11, std::string::npos).c_str(), NULL);
				this->_map[date] = value;
			}
			catch (const std::exception &exc) {
				std::cout << "Caught exception \"" << exc.what() << "\"" << std::endl;
				return 1;
			}
	}
	else {
		std::cout << "Error in function readCsv() => " << strerror(errno) << std::endl;
		return 1;
	}
	myfile.close();
	return 0;
}

//Main function of the program
int	BitChange::exchange(std::string filename) {

	std::fstream	myfile;
	std::string		buff;

	myfile.open(filename, std::ios::in);
	if (!myfile.is_open()) {
		std::cout << "Error in function exchange() => " << strerror(errno) << std::endl;
		return 1;
	}
	std::cout << "----- " << filename << " has been successfully opened. -----" << std::endl;
	if (this->readCsv()) {
		std::cout << "Error while parsing " << this->_dataSetName << " as dataset." << std::endl;
		return 1;
	}
	std::cout << "----- " << this->_dataSetName << " has been parsed with success. -----" << std::endl;
	/*
	std::getline(myfile, buff); //skip first line to avoid working on the columns' name
	while (std::getline(myfile, buff)) {
		BitChange::checkDate(buff);
		//BitChange::checkValue(buff);
	}
	*/
	return 0;
}

int	BitChange::checkDate(std::string str) {
	
	std::string res;
	std::string buf;

	buf = str.substr(0, str.find_first_not_of("0123456789"));
	if (buf.size() == 4 && atoi(buf.c_str()) < 2023) {
		res.append(buf);
		buf = str.substr(str.find_first_not_of("0123456789") + 1, (str.find_first_not_of("0123456789", 5) + 1) - str.find_first_not_of("0123456789"));
		std::cout << buf << std::endl;
		if (buf.size() != 2) {
			res.append("-" + buf);
		}
	}
	std::cout << "Error: bad input => [" << res << "] => " << str << std::endl;
	return 0;
}
