/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 21:18:52 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <unistd.h>
#include <sys/time.h>

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main() {

	Base *a;
	Base *b;
	Base *c;
	std::cout << std::endl << "-----Generating some random type classes-----" << std::endl;
	a = generate();
	b = generate();
	c = generate();
	std::cout << std::endl << "-----Identifying those classes by pointer-----" << std::endl;
	identify(a);
	identify(b);
	identify(c);
	std::cout << std::endl << "-----Identifying those classes by reference-----" << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);
	std::cout << std::endl << "-----Destroying everything-----" << std::endl;
	delete a;
	delete b;
	delete c;
	std::cout << std::endl << "----------THE END----------" << std::endl;
	return 0;
}

Base*	generate(void) {

	Base*	res;
	struct timeval ct;

	gettimeofday(&ct, NULL);
	std::srand(ct.tv_usec);
	switch (rand() % 3) {
		case 0:
			res = new A;
			std::cout << "A class generated" << std::endl;
			break;
		case 1:
			res = new B;
			std::cout << "B class generated" << std::endl;
			break;
		case 2:
			res = new C;
			std::cout << "C class generated" << std::endl;
			break;
	}
	return (res);
}

void	identify(Base* p) {
	
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A class identified by pointer!" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B class identified by pointer!" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C class identified by pointer!" << std::endl;
	else
		std::cout << "Error : Unable to identify any known class type." << std::endl;
	return ;
}

void	identify(Base& p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A class identified by reference!" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "B class identified by reference!" << std::endl;
			return ;
		}
		catch (std::bad_cast &bc) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "C class identified by reference!" << std::endl;
				return ;
			}
			catch (std::bad_cast &bc) {}
		}
	}
	std::cout << "Error : Unable to identify any known class type." << std::endl;
	return ;
}
