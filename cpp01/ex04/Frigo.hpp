/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frigo.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:17:16 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:40:19 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRIGO_HPP
# define FRIGO_HPP

# include <string>
# include <iostream>

class Frigo
{
public:

	std::string	filename;
	std::string newname;
	std::string	s1;
	std::string	s2;

	Frigo( std::string filename, std::string s1, std::string s2);
	~Frigo( void );
};

#endif
