/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:31:15 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 16:51:44 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "l'adresse de la string          = " << &str << std::endl;
	std::cout << "contenu de stringPTR            = " << stringPTR << std::endl;
	std::cout << "contenu de strinREF             = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "valeur de la string             = " << str << std::endl;
	std::cout << "valeur pointee par stringPTR    = " << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF    = " << stringREF << std::endl;
	return 0;
}
