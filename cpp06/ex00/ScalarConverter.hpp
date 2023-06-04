/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:33:11 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 16:51:13 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <string.h>
# include <cctype>
# include <cstdlib>
# include <climits>
# include <float.h>

class	ScalarConverter {

public:

	ScalarConverter( void );
	ScalarConverter( ScalarConverter const & src );
	ScalarConverter &	operator=( ScalarConverter const & rhs );
	~ScalarConverter( void );

	static void	convert(std::string s);

private:

	static int	isChar(std::string s);
	static int	getType(std::string s);
	static void	dispInt(std::string s);
	static void dispFloat(std::string s);
	static void dispDouble(std::string s);
	static void dispSpe(std::string s);

};

#endif
