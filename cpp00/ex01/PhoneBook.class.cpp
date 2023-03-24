/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:26:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/17 15:41:59 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int	PhoneBook::open(void) {

	std::string	buf;
	std::string	index;
	PhoneBook	pb;
	int			i;

	i = 0;
	std::cout << "Entering PhoneBook" << std::endl;
	std::cout << "Allowed commands are : ADD SEARCH EXIT" << std::endl;
	std::cout << "Please enter a command : " << std::endl;
	while ((std::cin >> buf) && (buf != "EXIT"))
	{
		if (i >= 8)
			i = 0;
		if (buf == "ADD")
		{
			pb.rep[i].setinfo();
			i++;
		}
		else if (buf == "SEARCH")
		{
			if (pb.dispall() == 0)
			{
				std::cout << "Please choose an index to display more info : " << std::endl;
				if (!(std::cin >> index))
					return 1;
				while (index != "EXIT" && pb.dispone(index))
				{
					std::cout << "Please choose an index to display more info : " << std::endl;
					if (!(std::cin >> index))
						return 1;
				}
			}
		}
		else
			std::cout << "Unknown command : try ADD SEARCH or EXIT" << std::endl;
		std::cout << std::endl << "Please enter a command : " << std::endl;
	}
	std::cout << "Exiting PhoneBook" << std::endl;
	return (0);
}

int	PhoneBook::dispone(std::string index) const {

	int	i;
	int	x;

	i = 0;
	if ((index.length() != 1) || ((int)index[0] < '0') || ((int)index[0] > '9'))
	{
		std::cout << "Wrong index, pls enter a single digit as index." << std::endl;
		return 1;
	}
	x = (index[0] - '0');
	while (!this->rep[i].getfname().empty() && (i < 8))
		i++;
	if ((x >= i) || (x < 0))
	{
		std::cout << "you entered : " << x << std::endl;
		std::cout << "wrong index, maxindex = " << (i - 1) << std::endl;
		return 1;
	}
	else
	{
		std::cout << "First name : " << this->rep[x].getfname() << std::endl;
		std::cout << "Last name : " << this->rep[x].getlname() << std::endl;
		std::cout << "Nickname : " << this->rep[x].getnickname() << std::endl;
		std::cout << "Number : " << this->rep[x].getnumber() << std::endl;
		std::cout << "Darkest secret : " << this->rep[x].getdsecret() << std::endl;
	}
	return 0;
}

int	PhoneBook::dispall(void) const {
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (!(this->rep[j].getfname().empty()) && (j < 8))
		j++;
	if (j <= 0)
	{
		std::cout << "PhoneBook seems empty, try to add a contact with ADD." << std::endl;
		return 1;
	}
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	while (!(this->rep[i].getfname().empty()) && (i < 8))
	{
		std::cout << "         " << i << "|";
		PhoneBook::dispten(this->rep[i].getfname());
		std::cout << "|";
		PhoneBook::dispten(this->rep[i].getlname());
		std::cout << "|";
		PhoneBook::dispten(this->rep[i].getnickname());
		std::cout << std::endl;
		i ++;
	}
	return 0;
}

void	PhoneBook::dispten(std::string str) const {

	std::cout << std::setw(10);
	if (str.length() > 10)
		std::cout << str.substr(0, 9).append(".");
	else
		std::cout << str;
	return ;
}
