/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:09:07 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 11:33:41 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

int	main(void) {

	std::cout << "Hello" << std::endl;

	AMateria	a;
	std::cout << a.getType() << std::endl;

	return 0;
}