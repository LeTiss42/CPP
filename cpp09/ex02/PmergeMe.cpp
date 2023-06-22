/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/22 23:50:01 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {

	//std::cout << "+ PmergeMe default constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(PmergeMe const & src) {

	*this = src;
	return ;
}

PmergeMe &	PmergeMe::operator=(PmergeMe const & rhs) {

	(void)rhs;
	//this->_data = rhs._data;
	return (*this);
}

PmergeMe::~PmergeMe(void) {

	//std::cout << "- PmergeMe default destructor called" << std::endl;
	return ;
}

int	PmergeMe::exec(std::string str) {

	this->parsing(str);
	return 0;
}

int	PmergeMe::parsing(std::string str) {

	std::istringstream	ss(str);
	std::string			buf;
	int					i = 0;

	while (ss >> buf) {
		i = 1;
		if ( (buf.find_first_not_of("0123456789") != std::string::npos)
			|| ( (buf.size() >= 10) && (buf > "2147483647") )
			|| (buf.size() == 0) ) {
			std::cout << "Error in parsing : invalid format." << std::endl;
			return 1;
		}
		std::cout << "[" << buf << "]" << std::endl;
	}
	if (i == 0)
		std::cout << "Error in parsing : invalid format." << std::endl;
	return 0;
}

//this function uses a closed-form equation of the Jacobsthal numbers
//those numbers are used in this algorithm to determine the most efficient order
//for the last merging step.
int PmergeMe::jacob(int n) {

	return ((pow(2, n) - pow((-1), n)) / 3);
}
