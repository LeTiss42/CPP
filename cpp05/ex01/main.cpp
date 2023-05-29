/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 14:32:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main( void ) {

	Form oui;
	std::cout << "name       : " << oui.getName() << std::endl;
	std::cout << "gradeExe   : " << oui.getGradeExe() << std::endl;
	std::cout << "gradeSigne : " << oui.getGradeSigne() << std::endl;
	std::cout << "signedUp   : " << oui.getSignedUp() << std::endl << std::endl;
	try {
		Form FormLow("MrLow", 200, 50);
	}
	catch (Form::GradeTooLowException& l) {
		std::cout << l.what() << "FormLow constructor" << std::endl << std::endl;
	}
	try {
		Form FormLow("MrLow2", 50, 200);
	}
	catch (Form::GradeTooLowException& l) {
		std::cout << l.what() << "FormLow constructor" << std::endl << std::endl;
	}
	
	try {
		Form FormHigh("MrHigh", 0, 50);
	}
	catch (Form::GradeTooHighException& l) {
		std::cout << l.what() << "FormHigh constructor" << std::endl << std::endl;
	}
	try {
		Form FormLow("MrHigh2", 50, 0);
	}
	catch (Form::GradeTooHighException& l) {
		std::cout << l.what() << "FormHigh constructor" << std::endl << std::endl;
	}

	Bureaucrat boss("Boss", 1);
	Bureaucrat pasBoss("PasBoss", 50);
	std::cout << boss << pasBoss << std::endl;

	Form	FormBeSignedByBoss("FormBeSignedByBoss", 1, 1);
	std::cout << FormBeSignedByBoss << std::endl;
	try {
		std::cout << pasBoss.getName() << " is trying to sign " << FormBeSignedByBoss.getName() << std::endl;
		FormBeSignedByBoss.beSigned(pasBoss);
	}
	catch (Form::GradeTooLowException& l) {
		std::cout << l.what() << "FormBeSignedByBoss error" << std::endl;
	}
	std::cout << FormBeSignedByBoss << std::endl;

	try {
		std::cout << boss.getName() << " is trying to sign " << FormBeSignedByBoss.getName() << std::endl;
		FormBeSignedByBoss.beSigned(boss);
	}
	catch (Form::GradeTooLowException& l) {
		std::cout << l.what() << "no error en fait" << std::endl << std::endl;
	}
	std::cout << FormBeSignedByBoss << std::endl << std::endl;
	
	Form	FormBeSignedByBoss2("FormBeSignedByBoss2", 1, 1);
	std::cout << FormBeSignedByBoss2 << std::endl;
	std::cout << pasBoss.getName() << " is trying to sign " << FormBeSignedByBoss2.getName() << std::endl;
	pasBoss.signForm(FormBeSignedByBoss2);
	std::cout << FormBeSignedByBoss2 << std::endl;

	std::cout << boss.getName() << " is trying to sign " << FormBeSignedByBoss.getName() << std::endl;
	boss.signForm(FormBeSignedByBoss2);
	std::cout << FormBeSignedByBoss2 << std::endl;
	
	return 0;
}
