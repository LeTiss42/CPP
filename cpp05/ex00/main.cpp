/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/28 19:16:09 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat oui;
	try {
		Bureaucrat non("jannot", 200);
	}
	catch (Bureaucrat::GradeTooLowException& l) {
		std::cout << l.what() << std::endl;
		return 0;
	}
	return 0;
}
