/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/26 17:18:53 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main( void ) {

	Form*	f1 = new Form();
	std::cout << *f1;
	std::cout << std::endl;

	Form*	f2 = new Form("SUU", 25, 30);
	std::cout << *f2;
	std::cout << std::endl;

	Form*	f3 = new Form(*f2);
	std::cout << *f3;
	std::cout << std::endl;
	
	Form*	f4 = new Form("f4", 1, 150);
	std::cout << *f4;
	std::cout << std::endl;

	*f4 = *f3;
	std::cout << *f4;
	std::cout << std::endl;

	Form* f5 = new Form("Too low", -10, 25);
	std::cout << *f5;
	std::cout << std::endl;

	Form* f6 = new Form("Too low2", 10, -25);
	std::cout << *f6;
	std::cout << std::endl;

	Form* f7 = new Form("Too low3", -10, -25);
	std::cout << *f7;
	std::cout << std::endl;

	Form* f10 = new Form(*f2);

	Bureaucrat* f8 = new Bureaucrat("Too low to signe", 50);
	Bureaucrat* f9 = new Bureaucrat("Ok to signe", 1);
	std::cout << *f8;
	std::cout << *f9;
	std::cout << std::endl;

	std::cout << *f2;
	f2->beSigned(*f8);
	std::cout << *f2;
	f2->beSigned(*f9);
	std::cout << *f2;
	std::cout << std::endl;

	std::cout << *f10;
	f8->signForm(*f10);
	std::cout << *f10;
	f9->signForm(*f10);
	std::cout << *f10;

	delete f1;
	delete f2;
	delete f3;
	delete f4;
	delete f5;
	delete f6;
	delete f7;
	delete f8;
	delete f9;
	delete f10;

	return 0;
}
