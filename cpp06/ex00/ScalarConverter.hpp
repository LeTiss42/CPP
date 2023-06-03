/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:33:11 by mravera           #+#    #+#             */
/*   Updated: 2023/06/03 12:05:28 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string.h>
# include <cctype>
# include <cstdlib>

class	ScalarConverter {

public:

	ScalarConverter( void );
	ScalarConverter( ScalarConverter const & src );
	ScalarConverter &	operator=( ScalarConverter const & rhs );
	~ScalarConverter( void );

	static void	convert(std::string s);
	static int	isChar(std::string s);
	static int	getType(std::string s);
	static void	dispInt(std::string s);

};

#endif
