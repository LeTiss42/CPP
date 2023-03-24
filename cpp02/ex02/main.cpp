/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 20:45:51 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main( void ) {

	Fixed	aaa(25);
	Fixed	bbb(42.42f);

	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "bbb = " << bbb << std::endl;
	std::cout << "aaa < bbb = " << (aaa < bbb) << std::endl;
	std::cout << "aaa > bbb = " << (aaa > bbb) << std::endl;
	std::cout << "aaa <= bbb = " << (aaa <= bbb) << std::endl;
	std::cout << "aaa >= bbb = " << (aaa >= bbb) << std::endl;
	std::cout << "aaa <= aaa = " << (aaa <= aaa) << std::endl;
	std::cout << "bbb >= bbb = " << (bbb >= bbb) << std::endl;

	std::cout << std::endl;
	std::cout << "aaa == bbb = " << (aaa == bbb) << std::endl;
	std::cout << "aaa == aaa = " << (aaa == aaa) << std::endl;
	std::cout << "aaa != bbb = " << (aaa != bbb) << std::endl;
	std::cout << "bbb != bbb = " << (bbb != bbb) << std::endl;

	std::cout << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "aaa++ =" << aaa++ << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "++aaa = " << ++aaa << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "aaa-- = " << aaa-- << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "--aaa = " << --aaa << std::endl;
	std::cout << "aaa = " << aaa << std::endl;

	std::cout << std::endl;
	std::cout << "bbb = " << bbb << std::endl;
	std::cout << "aaa++ =" << aaa++ << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "++aaa = " << ++aaa << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "aaa-- = " << aaa-- << std::endl;
	std::cout << "aaa = " << aaa << std::endl;
	std::cout << "--aaa = " << --aaa << std::endl;
	std::cout << "aaa = " << aaa << std::endl;std::cout << std::endl;
	std::cout << std::endl;

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	Fixed aa;
	Fixed const bb( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << aa << std::endl;
	std::cout << ++aa << std::endl;
	std::cout << aa << std::endl;
	std::cout << aa++ << std::endl;
	std::cout << aa << std::endl;

	std::cout << bb << std::endl;

	std::cout << Fixed::max( aa, bb ) << std::endl;

	return 0;
}
