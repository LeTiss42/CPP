/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 17:49:35 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main( void ) {

	Intern someRandomIntern;
	AForm* rrf;
	AForm* pasbon;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	pasbon = someRandomIntern.makeForm("pas bon", "inutile");

	Bureaucrat boss("boss", 1);
	boss.signForm(*rrf);
	boss.executeForm(*rrf);
	std::cout << *rrf << std::endl;
	delete rrf;

	std::cout << std::endl << "THE END!" << std::endl << std::endl;
	return 0;
}
