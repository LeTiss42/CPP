/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/23 12:12:35 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat*	b1 = new Bureaucrat();
	Bureaucrat*	b2 = new Bureaucrat("monsieur_2");
	Bureaucrat*	b3 = new Bureaucrat("monsieur_3", 145);
	Bureaucrat* b4 = new Bureaucrat("monsieur_tooLow", 155);
	Bureaucrat* b5 = new Bureaucrat("monsieur_tooHigh", 0);

	std::cout << std::endl;

	std::cout << b1->getName() << " : ";
	std::cout << b1->getGrade() << "->";
	b1->incGrade();
	std::cout << b1->getGrade() << std::endl;
	std::cout << b2->getName() << " : ";
	std::cout << b2->getGrade() << "->";
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	b2->incGrade();
	std::cout << b2->getGrade() << std::endl;
	std::cout << b3->getName() << " : ";
	std::cout << b3->getGrade() << "->";
	b3->decGrade();
	b3->decGrade();
	b3->decGrade();
	b3->decGrade();
	std::cout << b3->getGrade() << "->";
	b3->decGrade();
	b3->decGrade();
	b3->decGrade();
	b3->decGrade();
	std::cout << b3->getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << b4->getName() << " : " << b4->getGrade() << std::endl;
	std::cout << *b4 << std::endl;
	std::cout << b5->getName() << " : " << b5->getGrade() << std::endl;
	std::cout << *b5 << std::endl;
	std::cout << *b4 << " et " << *b5;
	std::cout << std::endl;

	delete b1;
	delete b2;
	delete b3;
	delete b4;
	delete b5;
	return 0;
}
