/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:40:17 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 20:56:00 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {

	std::cout << "Base destructor called" << std::endl;
	return ;
}

A::~A(void) {

	std::cout << "A destructor called" << std::endl;
	return ;
}

B::~B(void) {

	std::cout << "B destructor called" << std::endl;
	return ;
}

C::~C(void) {

	std::cout << "C destructor called" << std::endl;
	return ;
}
