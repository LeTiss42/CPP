/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/05/23 18:40:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

	delete f1;
	delete f2;
	delete f3;
	delete f4;
	return 0;
}
