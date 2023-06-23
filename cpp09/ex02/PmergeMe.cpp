/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/23 15:43:50 by mravera          ###   ########.fr       */
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

	if(this->parsing(str))
		return 1;
	this->dispVec();
	this->doubleUp();
	this->dispVec();
	this->bigSort();
	this->dispVec();

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
		this->myvector.push_back(atoi(buf.c_str()));
	}
	if (i == 0)
		std::cout << "Error in parsing : invalid format." << std::endl;
	return 0;
}

//This function just sort the 2 numbers in each pair of the vector container.
//ex : [5 1 4 3] -> [1 5 3 4]
int	PmergeMe::doubleUp(void) {

	int buf;

	if (this->myvector.size() <= 1)
		return 0;
	for(size_t i = 1; i < this->myvector.size(); i += 2) {
		if(this->myvector[i - 1] > this->myvector[i]) {
			buf = this->myvector[i];
			this->myvector[i] = this->myvector[i - 1];
			this->myvector[i - 1] = buf;
		}
	}
	return 0;
}

//This function sorts each pair looking at the biggest number of each.
//The biggest numbers will be sorted while the smallest ones of each pair will not.
//ex : [1 5 3 4] -> [1 4 3 5]
int	PmergeMe::bigSort(void) {

	size_t i = 3;
	int bufa;
	int	bufb;

	if(this->myvector.size() < 4)
		return 1;
	while(i < this->myvector.size()) {
		if(this->myvector[i] < this->myvector[i - 2]) {
			bufa = this->myvector[i];
			bufb = this->myvector[i - 1];
			this->myvector[i] = this->myvector[i - 2];
			this->myvector[i - 1] = this->myvector[i - 3];
			this->myvector[i - 2] = bufa;
			this->myvector[i - 3] = bufb;
			i -= 2;
			if(i < 3)
				i = 3;
		}
		else
			i += 2;
	}
	return 0;
}

//This function uses a closed-form equation of the Jacobsthal numbers
//those numbers are used in this algorithm to determine the most efficient order
//for the last merging step.
int PmergeMe::jacob(int n) {

	return ((pow(2, n) - pow((-1), n)) / 3);
}

void	PmergeMe::dispVec(void) {

	for(size_t i = 0; i < this->myvector.size(); i++) {
		std::cout << ' ' << this->myvector[i];
	}
	std::cout << std::endl;
	return ;
}
