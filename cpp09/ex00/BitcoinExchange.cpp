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
	BitChange::iter		it = _map.begin();
	while (it != _map.end()) {
		std::cout << std::setprecision(10) << it->first << " - " << it->second << std::endl;
		it ++;
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
				//old fashioned parsing with good old friend atoi. The date is parsed as an int for easy comparison
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

	if (this->readCsv()) {
		std::cout << "Error while parsing " << this->_dataSetName << " as dataset." << std::endl;
		return 1;
	}
	std::cout << "----- " << this->_dataSetName << " has been parsed with success. -----" << std::endl;
	this->dispThune(filename);
	std::cout << "----- THE END -----" << std::endl;
	return 0;
}

int	BitChange::dispThune(std::string filename) {

	std::fstream	myfile;
	std::string		buff;

	myfile.open(filename, std::ios::in);
	if (!myfile.is_open()) {
		std::cout << "Error in function dispThune() => " << strerror(errno) << std::endl;
		return 1;
	}
	std::cout << "----- " << filename << " has been opened with success. -----" << std::endl;
	//First line should not get parsed as it should contain only the name of the columns
	std::getline(myfile, buff);
	while(std::getline(myfile, buff)) {
		std::cout << buff << std::endl;
		if (this->checkDate(buff))
			std::cout << "Error: bad input => " << buff << std::endl;
	}
	return 0;
}

int	BitChange::checkDate(std::string str) {
	
	std::string res;
	std::string buf;
	size_t		pos;

	pos = str.find_first_not_of("0123456789");
	buf = str.substr(0, pos);
	std::cout << "chackdate() -> buf = " << buf << std::endl;
	if (buf.size() != 4 || BitChange::checky(buf))
		return 1;
	res = buf;
	if (str[pos++] != '-')
		return 1;
	buf = str.substr(pos);
	if (BitChange::checkm(buf))
		return 1;
	return 0;
}

int	BitChange::checky(std::string year) {

	int	y = atoi(year.c_str());
	if (y < 2009)
		return 1;
	return 0;
}

int	BitChange::checkm(std::string month) {

	size_t		pos = month.find_first_not_of("0123456789");
	std::string buf = month.substr(0, pos);
	int			m;

	std::cout << "checkm() -> buf = " << month << std::endl;
	std::cout << "checkm() -> month = " << buf << std::endl;
	if (buf.size() != 2 || atoi(buf.c_str()) > 12 || month[pos++] != '-')
		return 1;
	m = atoi(buf.c_str());
	buf = month.substr(pos);
	std::cout << "checkm() -> day = " << buf << std::endl;
	if (BitChange::checkd(buf, m))
		return 1;
	return 0;
}

int	BitChange::checkd(std::string day, int month) {

	size_t		pos = day.find_first_not_of("0123456789");
	std::string	buf = day.substr(0, pos);
	if (buf.size() != 2 || (month > 12) || (month <= 0) || (atoi(buf.c_str()) > 31)
		|| ( (month <= 7) && (month % 2 == 0) && (atoi(buf.c_str()) > 30) )
		|| ( (month >= 8) && (month % 2 == 1) && (atoi(buf.c_str()) > 30) )
		|| ( (month == 2) && (atoi(buf.c_str()) > 29)) )
		return 1;
	std::cout << "checkd() -> month = " << month << std::endl;
	std::cout << "checkd() -> day = " << day << std::endl;
	std::cout << "checkd() -> buf = " << buf << std::endl;
	return 0;
}
