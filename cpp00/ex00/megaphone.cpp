/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 01:29:26 by mravera           #+#    #+#             */
/*   Updated: 2023/03/16 11:22:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <string>

int	main (int argc, char **argv) 
{
	std::string buf;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
	for (int i = 1; i < argc; i++)
	{
		buf = argv[i];
		for (size_t j = 0; j < buf.length();  j++)
			std::cout << std::toupper(argv[i][j], std::locale());
	}
	std::cout << std::endl;
	}
	return 0;
}
