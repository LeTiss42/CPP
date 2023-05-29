/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 11:22:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat oui;
	std::cout << "name : " << oui.getName() << "\ngrade : " << oui.getGrade() << std::endl << std::endl;
	try {
		Bureaucrat MrLow("MrLow", 200);
	}
	catch (Bureaucrat::GradeTooLowException& l) {
		std::cout << l.what() << "MrLow constructor" << std::endl << std::endl;
	}
	
	try {
		Bureaucrat MrHigh("MrHigh", 0);
	}
	catch (Bureaucrat::GradeTooHighException& l) {
		std::cout << l.what() << "MrHigh constructor" << std::endl << std::endl;
	}

	Bureaucrat	MrIncHigh("MrIncHigh", 1);
	std::cout << MrIncHigh;
	try {
		MrIncHigh.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException& l) {
		std::cout << l.what() << "MrIncHigh" << std::endl << std::endl;
	}

	Bureaucrat	MrIncLow("MrIncLow", 150);
	std::cout << MrIncLow;
	try {
		MrIncLow.decGrade();
	}
	catch (Bureaucrat::GradeTooLowException& l) {
		std::cout << l.what() << "MrIncLow" << std::endl << std::endl;
	}

	return 0;
}
