/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/09 17:04:50 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	const Bureaucrat*	b1 = new Bureaucrat();
	const Bureaucrat*	b2 = new Bureaucrat("monsieur_2");

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << b1->getName() << " " << std::endl;
	std::cout << b1->getGrade() << " " << std::endl;
	std::cout << b2->getName() << " " << std::endl;
	std::cout << b2->getGrade() << " " << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	delete b1;
	delete b2;
	return 0;
}
