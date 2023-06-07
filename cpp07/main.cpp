/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:43:33 by mravera           #+#    #+#             */
/*   Updated: 2023/06/07 22:44:16 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

/*
	int	a = 12;
	int	b = 21;
	std::cout << a << " : " <<  b << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "swaping values" << std::endl;
	swap(a, b);
	std::cout << a << " : " << b << std::endl;

	std::cout << std::endl << "trying with strings : " << std::endl << std::endl;

	std::string	c = "12";
	std::string	d = "21";
	std::cout << c << " : " << d << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "swaping values" << std::endl;

	swap(c, d);
	std::cout << c << " : " << d << std::endl;
	return 1;
*/
}
