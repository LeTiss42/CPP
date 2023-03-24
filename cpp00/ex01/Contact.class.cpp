/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:33:13 by mravera           #+#    #+#             */
/*   Updated: 2023/03/16 22:01:19 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

std::string	Contact::getfname(void) const {
	return (this->fname);
}

std::string	Contact::getlname(void) const {
	return (this->lname);
}

std::string	Contact::getnickname(void) const {
	return (this->nickname);
}

std::string	Contact::getnumber(void) const {
	return (this->number);
}

std::string	Contact::getdsecret(void) const {
	return (this->dsecret);
}

int	Contact::setinfo(void) {

	std::cout << "PLS change any whitespace with an underscore" << std::endl;

	std::cout << "First name : ";
	if (!(std::cin >> this->fname))
		return 1;
	std::cout << std::endl;

	std::cout << "Last name : ";
	if (!(std::cin >> this->lname))
		return 1;
	std::cout << std::endl;

	std::cout << "Nickname : ";
	if (!(std::cin >> this->nickname))
		return 1;
	std::cout << std::endl;

	std::cout << "Phone number : ";
	if (!(std::cin >> this->number))
		return 1;
	std::cout << std::endl;

	std::cout << "Darkest secret : ";
	if (!(std::cin >> this->dsecret))
		return 1;
	std::cout << std::endl;

	std::cout << "Contact added" << std::endl;

	return 0;
}