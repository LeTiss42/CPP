/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:44:03 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 15:42:01 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void) {

	MutantStack<int>	a;
	a.push(25);
	a.push(35);
	std::cout << "a.size = " << a.size() << std::endl;
	std::cout << "a.top() = " << a.top() << std::endl;
	std::cout << "THE END" << std::endl;
	return 0;
}
