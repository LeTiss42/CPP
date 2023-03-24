/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frigo.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:22:57 by mravera           #+#    #+#             */
/*   Updated: 2023/03/20 14:57:30 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Frigo.hpp"

Frigo::Frigo( std::string filename, std::string s1, std::string s2) :
			filename(filename), s1(s1), s2(s2), newname(filename) {
	return ;
}

Frigo::~Frigo( void ) {
	return ;
}
