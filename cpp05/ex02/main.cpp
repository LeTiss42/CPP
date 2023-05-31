/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/31 15:01:49 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int	main( void ) {

	PresidentialPardonForm	ppf1("Toto");
	Bureaucrat				boss("boss1", 1);
	Bureaucrat				pasBoss("pasBoss", 100);

	std::cout << std::endl << boss << std::endl << pasBoss << std::endl << ppf1 << std::endl;
	pasBoss.signForm(ppf1);
	boss.executeForm(ppf1);
	boss.signForm(ppf1);
	pasBoss.executeForm(ppf1);
	boss.executeForm(ppf1);
	std::cout << std::endl << ppf1 << std::endl;

	std::cout << std::endl << "THE END!" << std::endl << std::endl;
	return 0;
}
