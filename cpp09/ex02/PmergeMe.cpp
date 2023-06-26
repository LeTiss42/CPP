/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/26 15:31:35 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//Binary search on sorted numbers uses the same amount of comparisons when there is (2^n) elements
//in the list as when there is ((2^(n+1)) - 1) elements.
//knowing this, we will sort each numbers with the number next to it creating pairs of sorted numbers.
//ex : [5 1 4 3] -> [1 5 3 4]
//We then sort all those pairs looking only their biggest number.
//ex : [1 5 3 4] -> [3 4 1 5]
//We can finally merge the unsorted numbers (the smallest number of each pair). Knowing that those
//numbers cannnot be bigger than the other number in the pair, we can use binary search on a reduced list.

//main function :
int	PmergeMe::exec(std::string str) {

	if(this->parsing(str))
		return 1;
	this->dispVec();
	this->doubleUp();
	this->dispVec();
	this->bigSort();
	this->dispVec();
	this->mergeIt();
	return 0;
}

//Parsing the std::string in a container :
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

//This function sorts each pair looking at the biggest number of each while keeping the pairs.
//The biggest numbers will be sorted while the smallest ones of each pair will not.
//ex : [1 5 3 4] -> [3 4 1 5]
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


//Now that we have half of the numbers sorted and each of them being paired with a 
//smaller one (but not sorted), we need to merge those small numbers and sort everything up.
//I use here a buffer vector to know wich elements have been sorted and the others that still
//need to be sorted.
int	PmergeMe::mergeIt(void) {

	std::vector<int>	big;
	std::vector<int>	small;
	/*
	int	a	= 4;
	int	z	= 2;
	int	x	= 2;
	int	i	= 2;
	int	pos	= 2;
	*/
	
	for(std::vector<int>::iterator it = this->myvector.begin(); it != this->myvector.end(); it++) {
		small.push_back(*it);
		it++;
		if(it != this->myvector.end())
			big.push_back(*it);
	}
	std::cout << "big = ";
	for(std::vector<int>::iterator it = big.begin(); it != big.end(); it++)
		std::cout << *it;
	std::cout << " small = ";
	for(std::vector<int>::iterator it = small.begin(); it != small.end(); it++)
		std::cout << *it;
	std::cout << std::endl;
/*
	//merge 4 -> 2
	z = a;//4
	x = pow(2, i++) - x;//2
	a = a + x;//6
	//merge 6 -> 4
	z = a;//6
	x = pow(2, i++) - x;//6
	a = a + x;//12
	//merge 12 -> 6
	z = a;//12
	x = pow(2, i++) - x;//10;
	a = a + x;//22;
	//merge 22 -> 12;
*/
	return 0;
}

//little function to display the content of the vector.
void	PmergeMe::dispVec(void) {

	for(size_t i = 0; i < this->myvector.size(); i++) {
		std::cout << ' ' << this->myvector[i];
	}
	std::cout << std::endl;
	return ;
}

//***** not using it anymore *****
//This function uses a closed-form equation to find the Jacobsthal numbers
//those numbers are used in this algorithm to determine the most efficient order
//for the last merging step.
int PmergeMe::jacob(int n) {

	return ((pow(2, n) - pow((-1), n)) / 3);
}

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
