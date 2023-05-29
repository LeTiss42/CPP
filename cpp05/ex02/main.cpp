/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 15:10:30 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

int	main( void ) {

	AForm oui;
	std::cout << "name       : " << oui.getName() << std::endl;
	std::cout << "gradeExe   : " << oui.getGradeExe() << std::endl;
	std::cout << "gradeSigne : " << oui.getGradeSigne() << std::endl;
	std::cout << "signedUp   : " << oui.getSignedUp() << std::endl << std::endl;
	try {
		AForm AFormLow("MrLow", 200, 50);
	}
	catch (AForm::GradeTooLowException& l) {
		std::cout << l.what() << "AFormLow constructor" << std::endl << std::endl;
	}
	try {
		AForm AFormLow("MrLow2", 50, 200);
	}
	catch (AForm::GradeTooLowException& l) {
		std::cout << l.what() << "AFormLow constructor" << std::endl << std::endl;
	}
	
	try {
		AForm AFormHigh("MrHigh", 0, 50);
	}
	catch (AForm::GradeTooHighException& l) {
		std::cout << l.what() << "AFormHigh constructor" << std::endl << std::endl;
	}
	try {
		AForm AFormLow("MrHigh2", 50, 0);
	}
	catch (AForm::GradeTooHighException& l) {
		std::cout << l.what() << "AFormHigh constructor" << std::endl << std::endl;
	}

	Bureaucrat boss("Boss", 1);
	Bureaucrat pasBoss("PasBoss", 50);
	std::cout << boss << pasBoss << std::endl;

	AForm	AFormBeSignedByBoss("AFormBeSignedByBoss", 1, 1);
	std::cout << AFormBeSignedByBoss << std::endl;
	try {
		std::cout << pasBoss.getName() << " is trying to sign " << AFormBeSignedByBoss.getName() << std::endl;
		AFormBeSignedByBoss.beSigned(pasBoss);
	}
	catch (AForm::GradeTooLowException& l) {
		std::cout << l.what() << "AFormBeSignedByBoss error" << std::endl;
	}
	std::cout << AFormBeSignedByBoss << std::endl;

	try {
		std::cout << boss.getName() << " is trying to sign " << AFormBeSignedByBoss.getName() << std::endl;
		AFormBeSignedByBoss.beSigned(boss);
	}
	catch (AForm::GradeTooLowException& l) {
		std::cout << l.what() << "no error en fait" << std::endl << std::endl;
	}
	std::cout << AFormBeSignedByBoss << std::endl << std::endl;
	
	AForm	AFormBeSignedByBoss2("AFormBeSignedByBoss2", 1, 1);
	std::cout << AFormBeSignedByBoss2 << std::endl;
	std::cout << pasBoss.getName() << " is trying to sign " << AFormBeSignedByBoss2.getName() << std::endl;
	pasBoss.signForm(AFormBeSignedByBoss2);
	std::cout << AFormBeSignedByBoss2 << std::endl;

	std::cout << boss.getName() << " is trying to sign " << AFormBeSignedByBoss.getName() << std::endl;
	boss.signForm(AFormBeSignedByBoss2);
	std::cout << AFormBeSignedByBoss2 << std::endl;
	
	return 0;
}
