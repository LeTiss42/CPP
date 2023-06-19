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
	int				date;

	myfile.open(filename, std::ios::in);
	if (!myfile.is_open()) {
		std::cout << filename << " : " << strerror(errno) <<std::endl;
		return 1;
	}
	std::cout << "----- " << filename << " has been opened with success. -----" << std::endl;
	//First line should not get parsed as it should contain only the name of the columns
	std::getline(myfile, buff);
	while(std::getline(myfile, buff)) {
		date = this->checkDate(buff);
		if (!date || date < this->_map.begin()->first)
			std::cout << "Error: bad input => " << buff << std::endl;
		else
			this->dispValue(date, buff);
	}
	return 0;
}

int	BitChange::checkDate(std::string str) {
	
	std::string res;
	std::string buf;
	size_t		pos;

	pos = str.find_first_not_of("0123456789");
	buf = str.substr(0, pos);
	if (buf.size() != 4 || (atoi(buf.c_str()) < 2009) || (str[pos++] != '-'))
		return 1;
	res = buf;
	buf = str.substr(pos);
	return(BitChange::checkm(buf, &res));
}

int	BitChange::checkm(std::string month, std::string *res) {

	size_t		pos = month.find_first_not_of("0123456789");
	std::string buf = month.substr(0, pos);
	int			m;

	if (buf.size() != 2 || atoi(buf.c_str()) > 12 || month[pos++] != '-')
		return 1;
	res->append(buf);
	m = atoi(buf.c_str());
	buf = month.substr(pos);
	return (BitChange::checkd(buf, m, res));
}

int	BitChange::checkd(std::string day, int month, std::string *res) {

	size_t		pos = day.find_first_not_of("0123456789");
	std::string	buf = day.substr(0, pos);
	int			d   = atoi(buf.c_str());

	if (buf.size() != 2 || (month > 12) || (month <= 0) || (d > 31)
		|| ( (month <= 7) && (month % 2 == 0) && (d > 30) )
		|| ( (month >= 8) && (month % 2 == 1) && (d > 30) )
		|| ( (month == 2) && (d > 29)) )
		return 0;
	res->append(buf);
	return (atoi(res->c_str()));
}

int	BitChange::dispValue(int date, std::string buff) {

	std::map<int, double>::iterator it;
	std::map<int, double>::iterator itbuf;
	double							value;

	it = this->_map.find(date);
	if(it == this->_map.end()) {
		itbuf = this->_map.begin();
		while(itbuf != this->_map.end() && (itbuf->first < date)) {
			it = itbuf;
			itbuf++;
		}
	}
	value = this->checkValue(buff);
	if (value >= 0)
		std::cout << buff.substr(0, 10) << " => " << buff.substr(13, std::string::npos) << " = " << (it->second * value) << std::endl;
	return 0;
}

double	BitChange::checkValue(std::string buff) {

	std::string	s;
	double		res;

	try {
		s = buff.substr(13, std::string::npos);
	}
	catch (const std::out_of_range& oor) {
		std::cout << "Error: bad input => " << buff << std::endl;
		return (-1);
	}
	if (s.find_first_not_of("-.0123456789") != std::string::npos
		|| (s.find_first_of(".") != s.find_last_of("."))
		|| ( (s.find_first_of("-") != 0) && (s.find_first_of("-") != std::string::npos) ) ) {
		std::cout << "Error: bad input => " << buff << std::endl;
		return (-1);
	}
	res = strtod(s.c_str(), NULL);
	if (res > 1000) {
		std::cout << "Error: too large number." << std::endl;
		return (-1);
	}
	if (res < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return -1;
	}
	return (res);
}
