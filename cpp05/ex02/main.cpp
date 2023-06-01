/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 13:07:49 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int	main( void ) {

	PresidentialPardonForm	ppf1("ppf target");
	RobotomyRequestForm		rrf1("rrf target");
	Bureaucrat				boss("boss", 1);
	Bureaucrat				pasBoss("pasBoss", 100);

	std::cout << std::endl << boss << std::endl << pasBoss << std::endl << ppf1 << std::endl;
	std::cout << rrf1 << std::endl;
	pasBoss.signForm(ppf1);
	boss.executeForm(ppf1);
	boss.signForm(ppf1);
	pasBoss.executeForm(ppf1);
	boss.executeForm(ppf1);
	std::cout << std::endl << ppf1 << std::endl;

	pasBoss.signForm(rrf1);
	boss.executeForm(rrf1);
	boss.signForm(rrf1);
	pasBoss.executeForm(rrf1);
	boss.executeForm(rrf1);
	std::cout << std::endl << rrf1 << std::endl;

	std::cout << std::endl << "THE END!" << std::endl << std::endl;
	return 0;
}
