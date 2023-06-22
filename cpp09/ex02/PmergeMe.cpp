/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:23 by mravera           #+#    #+#             */
/*   Updated: 2023/06/22 12:15:14 by mravera          ###   ########.fr       */
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

int PmergeMe::jacob(int n) {

	return ((pow(2, n) - pow((-1), n)) / 3);
}
