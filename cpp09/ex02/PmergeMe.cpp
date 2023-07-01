/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/07/01 18:22:37 by mravera          ###   ########.fr       */
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
//numbers cannnot be bigger than the other number in the pair, we can use binary search on a reduced portion of the list.
//-> it should be possible to use Template to have a single function working for each container.

//Parsing the std::string in a container.
//No double allowed.
int	PmergeMe::parsing(int argc, char **argv) {

	std::string			buf;
	int					i = 0;

	for(int j = 1; j < argc; j++) {
		buf = argv[j];
		i = 1;
		if ( (buf.find_first_not_of("0123456789") != std::string::npos)
			|| ( (buf.size() >= 10) && (buf > "2147483647") )
			|| (buf.size() == 0) ) {
			std::cout << "Error in parsing : invalid format." << std::endl;
			return 1;
		}
		for(std::vector<int>::iterator it = this->myvector.begin(); it != this->myvector.end(); it++) {
			if (*it == atoi(buf.c_str())) {
			 	std::cout << "Error in parsing : doubles are not allowed [" << *it << "]" << std::endl;
				return 1;
			}
		}
		this->myvector.push_back(atoi(buf.c_str()));
		this->mylist.push_back(atoi(buf.c_str()));
	}
	if (i == 0) {
		std::cout << "Error in parsing : invalid format." << std::endl;
		return 1;
	}
	return 0;
}

//main function for the vector container :
int	PmergeMe::execVector(void) {

	this->doubleUp();
	this->bigSort();
	if( (this->myvector.size() == 3) || (this->myvector.size() == 4) )
		this->littleMerge();
	else if (this->myvector.size() > 4)
		this->mergeIt();
	return 0;
}

//main function for the list container :
int	PmergeMe::execList(void) {

	this->doubleUplst();
	this->bigSortlst();
	if( (this->mylist.size() == 3) || (this->mylist.size() == 4) )
		this->littleMergelst();
	else if (this->mylist.size() > 4)
		this->mergeItlst();
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

//Same function for a list container
int	PmergeMe::doubleUplst(void) {

	int buf;

	if (this->mylist.size() <= 1)
		return 0;
	for(size_t i = 1; i < this->mylist.size(); i += 2) {
		if(*setlst(this->mylist, (i - 1)) > *setlst(this->mylist, i)) {
			buf = *setlst(this->mylist, i);
			*setlst(this->mylist, i) = *setlst(this->mylist, (i - 1));
			*setlst(this->mylist, (i - 1)) = buf;
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

//Same function for a list container
int	PmergeMe::bigSortlst(void) {

	size_t i = 3;
	int bufa;
	int	bufb;

	if(this->mylist.size() < 4)
		return 1;
	while(i < this->mylist.size()) {
		if(*this->setlst(this->mylist, i) < *this->setlst(this->mylist, i - 2)) {
			bufa = *this->setlst(this->mylist, i);
			bufb = *this->setlst(this->mylist, i - 1);
			*this->setlst(this->mylist, i) = *this->setlst(this->mylist, (i - 2));
			*this->setlst(this->mylist, i - 1) = *this->setlst(this->mylist, (i - 3));
			*this->setlst(this->mylist, i - 2) = bufa;
			*this->setlst(this->mylist, i - 3) = bufb;
			i -= 2;
			if(i < 3)
				i = 3;
		}
		else
			i += 2;
	}
	return 0;
}

//function to merge sequence of size 3 or 4.
int	PmergeMe::littleMerge(void) {
	
	int	buf;

	buf = this->myvector[2];
	if(buf > this->myvector[0]) {
		if(buf > this->myvector[1])
			return 0;
		this->myvector.erase(this->myvector.begin() + 2);
		this->myvector.insert(this->myvector.begin() + 1, buf);
		return 0;
	}
	this->myvector.erase(this->myvector.begin() + 2);
	this->myvector.insert(this->myvector.begin(), buf);
	return 0;
}

//Same function for a list container.
int	PmergeMe::littleMergelst(void) {
	
	int	buf;

	buf = *this->setlst(this->mylist, 2);
	if(buf > *this->setlst(this->mylist, 0)) {
		if(buf > *this->setlst(this->mylist, 1))
			return 0;
		*this->setlst(this->mylist, 2) = *this->setlst(this->mylist, 1);
		*this->setlst(this->mylist, 1) = buf;
		return 0;
	}
	*this->setlst(this->mylist, 2) = *this->setlst(this->mylist, 0);
	*this->setlst(this->mylist, 0) = buf;
	return 0;
}

//Now that we have half of the numbers sorted and each of them being paired with a 
//smaller one (but not sorted), we need to merge those small numbers and sort everything up.
//I use here a buffer vector to know wich elements have been sorted and the others that still
//need to be sorted.
int	PmergeMe::mergeIt(void) {

	size_t						x	= 2;
	size_t						pw	= 2;
	size_t						a	= 0;
	size_t						z	= 1;
	size_t						tot	= 0;
	std::vector<int>			big;
	std::vector<int>			small;
	
	for(std::vector<int>::iterator it = this->myvector.begin(); it != this->myvector.end();) {
		small.push_back(*it);
		it++;
		if(it != this->myvector.end()) {
			big.push_back(*it);
			it++;
		}
	}
	big.insert(big.begin(), small.front());
	small.erase(small.begin());
	while(tot < small.size()) {
		for(int k = (int)z; k >= (int)a; k--) {
			this->insertOne(k, small, big);
			tot++;
		}
		a = z + 1;
		x = pow(2, pw++) - x;
		if ( (z + x) < (small.size() - 1))
			z += x;
		else
			z = (small.size() - 1);
	}
	if(big.size() != this->myvector.size()) {
		std::cout << "An error occured..." << std::endl;
		return 1;
	}
	this->myvector.swap(big);
	return 0;
}

int	PmergeMe::insertOne(size_t	x, std::vector<int> &small, std::vector<int> &big) {
	
	int	top = *(big.end() - 1);

	(void)big;
	for(std::vector<int>::iterator it = this->myvector.begin(); it != this->myvector.end(); it++) {
		if((*it == small[x]) && (it != this->myvector.end() - 1)) {
			top = *(++it);
			break;
		}
		else if((*it == small[x]) && (it == this->myvector.end() - 1)){
			top = *(--it);
			break;
		}
	}
	big.insert(std::lower_bound(big.begin(), find(big.begin(), big.end(), small[x]), small[x]), small[x]);
	return 0;
}

//Same function for a list container
int	PmergeMe::mergeItlst(void) {

	size_t						x	= 2;
	size_t						pw	= 2;
	size_t						a	= 0;
	size_t						z	= 1;
	size_t						tot	= 0;
	std::list<int>			big;
	std::list<int>			small;
	
	for(std::list<int>::iterator it = this->mylist.begin(); it != this->mylist.end();) {
		small.push_back(*it);
		it++;
		if(it != this->mylist.end()) {
			big.push_back(*it);
			it++;
		}
	}
	big.insert(big.begin(), small.front());
	small.erase(small.begin());
	while(tot < small.size()) {
		for(int k = (int)z; k >= (int)a; k--) {
			this->insertOnelst(k, small, big);
			tot++;
		}
		a = z + 1;
		x = pow(2, pw++) - x;
		if ( (z + x) < (small.size() - 1))
			z += x;
		else
			z = (small.size() - 1);
	}
	if(big.size() != this->myvector.size()) {
		std::cout << "An error occured..." << std::endl;
		return 1;
	}
	this->mylist.swap(big);
	return 0;
}

int	PmergeMe::insertOnelst(size_t	x, std::list<int> &small, std::list<int> &big) {
	
	int	top = big.back();

	(void)big;
	for(std::list<int>::iterator it = this->mylist.begin(); it != this->mylist.end(); it++) {
		if((*it == *this->setlst(small, x)) && (it != (this->setlst(this->mylist, this->mylist.size() - 1)))) {
			top = *(++it);
			break;
		}
		else if((*it == *this->setlst(small, x)) && (it == this->setlst(this->mylist, this->mylist.size() - 1))){
			top = *(--it);
			break;
		}
	}
	big.insert( std::lower_bound( big.begin(), find( big.begin(), big.end(), *this->setlst(small, x) ), *this->setlst(small, x)), *this->setlst(small, x));
	return 0;
}

//little function to display the content of the vector.
void	PmergeMe::dispVec(void) {

	for(size_t i = 0; i < this->myvector.size(); i++) {
		std::cout << ' ';
		if(this->myvector[i] < 10)
			std::cout << "0";
		std::cout << this->myvector[i];
		if((i % 2) != 0)
			std::cout << " ";
	}
	std::cout << std::endl;
	return ;
}

void	PmergeMe::dispVecSimple(void) {

	for(size_t i = 0; i < this->myvector.size(); i++) {
		std::cout << this->myvector[i];
		std::cout << ' ';
	}
	std::cout << std::endl;
	return ;
}

void	PmergeMe::dispLstSimple(void) {

	for(size_t i = 0; i < this->mylist.size(); i++) {
		std::cout << *this->setlst(this->mylist, i);
		std::cout << ' ';
	}
	std::cout << std::endl;
	return ;
}

//little function to get an iterator at the position i in the list.
std::list<int>::iterator	PmergeMe::setlst(std::list<int> &mylist, int pos) {

	int i = 0;

	std::list<int>::iterator it = mylist.begin();
	while(i < pos) {
		it++;
		i++;
	}
	return it;
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
