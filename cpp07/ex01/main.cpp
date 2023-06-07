/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:43:33 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 00:29:15 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void	test(T &t) {

	t = t + 1 ;
	return ;
}

template <typename T>
void	disptab(T tab) {

	std::cout << "[ "<< tab << " ]";
	return ;
}

int main(void) {

	int		tab[5] = {1, 34, 52, 1000, -5};
	double	tab2[5] = {1.0, 2.0, 3.0, 4.0, 4.0};
	char	chartab[] = {'a', 'b', 'c', 'd', 'e'};

	iter(tab, 5, disptab);
	std::cout << std::endl;
	iter(tab, 5, test);
	iter(tab, 5, disptab);
	std::cout << std::endl;
	std::cout << std::endl;
	iter(tab2, 5, disptab);
	std::cout << std::endl;
	iter(tab2, 5, test);
	iter(tab2, 5, disptab);
	std::cout << std::endl;
	std::cout << std::endl;
	iter(chartab, 5, disptab);
	std::cout << std::endl;
	iter(chartab, 5, test);
	iter(chartab, 5, disptab);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "THE END" << std::endl; 
	return 1;
}
