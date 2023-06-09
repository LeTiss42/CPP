/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:20:40 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 03:18:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(void) {

	//std::cout << "+ Default Span constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int N) {

	_N = N;
	//std::cout << "+ Parametric Span constructor called" << std::endl;
	return ;
}

Span::Span(Span const & src) {

	this->_N = src._N;
	this->_content = src._content;
	*this = src;
	//std::cout << "+(=) Copy Span constructor called" << std::endl;
	return ;
}

Span & Span::operator=(Span const & rhs) {

	this->_N = rhs._N;
	this->_content = rhs._content;
	return (*this);
}

Span::~Span(void) {

	//std::cout << "- Default Span destructor called" << std::endl;
	return ;
}

void	Span::addNumber(int x) {

	if (this->_content.size() >= this->_N)
		throw Span::SpanFullException();
	this->_content.push_back(x);
	return ;
}

void	Span::insertSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if ((this->_content.size() + std::distance(begin, end)) > this->_N)
		throw Span::SpanTooSmallException();
	this->_content.insert(this->_content.end(), begin, end);
	return ;
}

unsigned int	Span::shortestSpan(void) {

	unsigned int		res;
	unsigned int		temp;
	std::vector<int>	buf(this->_content);
	std::vector<int>::iterator it;

	if (this->_content.size() < 2 || this->_N < 2)
		throw SpanTooSmallException();
	std::sort(buf.begin(), buf.end());
	res = *(buf.begin() + 1) - *buf.begin();
	it = buf.begin() + 1;
	while(it != (buf.end() - 1)) {
		temp = (*(it + 1) - *it);
		if (temp < res)
			res = temp;
		++it;
	}
	return (res);
}

unsigned int	Span::longestSpan(void) {

	unsigned int	res;

	if (this->_content.size() < 2 || this->_N < 2)
		throw SpanTooSmallException();
	res = *std::max_element(this->_content.begin(), this->_content.end())
			- *std::min_element(this->_content.begin(), this->_content.end());
	return (res);
}

const char* Span::SpanFullException::what(void) const throw() {

	return ("Error: Span is full.\n");
}

const char* Span::SpanTooSmallException::what(void) const throw() {

	return ("Error: Not enough value in Span.\n");
}

void	Span::dispContent(void) {

	for(std::vector<int>::iterator it = this->_content.begin(); it != this->_content.end(); it++)
        std::cout << *it << " ";
	std::cout << std::endl;
	return ;
}
