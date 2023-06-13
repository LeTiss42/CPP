/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:07:27 by mravera           #+#    #+#             */
/*   Updated: 2023/06/13 16:50:40 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//Default constructor take gives "data.csv" as default file name for the dataset used by the program.
BitChange::BitChange(void) : _dataSetName("data.csv") {

	std::cout << "+ BitChange default constructor called" << std::endl;
	return ;
}

//Parametric constructor allows one to choose the dataset used by the program.
BitChange::BitChange(std::string _dataSetName) : _dataSetName(_dataSetName) {

	std::cout << "+ BitChange parametric constructor called" << std::endl;
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

	std::cout << "- BitChange default destructor called" << std::endl;
	return ;
}

void	BitChange::dispData(void) {

	std::cout << "---data---" << std::endl;
	for (BitChange::iter it = _map.begin(); it != _map.end(); it++)
		std::cout << it->first << " - " << it->second << std::endl;
	return ;
}

//readCsv take the file name stored in the BitChange class and stores its content in the map called _map.
int	BitChange::readCsv(void) {

	std::fstream	myfile;
	std::string		buff;
	std::string		dateSet = "0123456789-";	//Set of all characters appearing in a date in the csv
	std::string		valueSet = "0123456789.";	//Set of all characters appearing in a value in the csv

	myfile.open(this->_dataSetName, std::ios::in);
	if (myfile.is_open()) {	//Open the csv file and check success.
		std::getline(myfile, buff);	//Get the first line to avoid parsing it.
		while(std::getline(myfile, buff))
		 	//The csv file should be correct, we first place the substring from beginning to last character that does not appear in dateSet in a map.
			//Place the substring from the last character that does not appear in the valueSet to last character in the map as value for previous date.
			try {
				this->_map[std::string(buff, 0, buff.find_first_not_of(dateSet))] = std::string(buff, (buff.find_last_not_of(valueSet) + 1), std::string::npos);
			}
			catch (const std::exception &exc) {
				std::cout << "Caught exception \"" << exc.what() << "\"" << std::endl;
			}
	}
	else {
		std::cout << "Error in function readCsv() => " << strerror(errno) << std::endl;
		return 1;
	}
	myfile.close();
	return 0;
}

//main function of the program
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
	std::cout << "----- " << this->_dataSetName << " has been successfully parsed. -----" << std::endl;
	std::getline(myfile, buff); //skip first line to avoid working on the columns' name
	while (std::getline(myfile, buff)) {
		std::cout << buff << std::endl;
	}
	return 0;
}
