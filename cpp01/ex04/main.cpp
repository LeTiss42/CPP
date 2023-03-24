/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:31:15 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 11:50:59 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "Frigo.hpp"

int	writeline(std::ofstream& of, std::ifstream& inf, std::string buf, Frigo& frigo) {

	std::size_t	found;
	std::size_t	x;

	x = 0;
	found = buf.find(frigo.s1);
	while (found != (std::size_t)-1)
	{
		of << buf.substr(x, found - x);
		of << frigo.s2;
		x = found + frigo.s1.length();
		found = x;
		found = buf.find(frigo.s1, found);
	}
	of << buf.substr(x);
	if (!inf.eof())
		of << std::endl;
	return (0);
}

int	main(int argc, char **argv) {

	std::string	buf;

	if (argc != 4)
	{
		std::cout << "Need 3 arguments : a file name and 2 strings" << std::endl;
		return (1);
	}
	Frigo		frigo(argv[1], argv[2], argv[3]);
	if (frigo.s1.empty() || frigo.s2.empty() || frigo.filename.empty())
	{
		std::cout << "Error, at least one argument is empty." << std::endl;
		return (1);
	}
	frigo.newname.append(".replace");
	std::ifstream	inf(frigo.filename);
	if (!inf.is_open())
	{
		std::cout << "Error, cannot open the infile!" << std::endl;
		return (1);
	}
	std::ofstream	of(frigo.newname, std::ios::out | std::ios::trunc);
	if (!of.is_open())
	{
		std::cout << "Error, cannot open the outfile!" << std::endl;
		inf.close();
		return (1);
	}
	while (std::getline(inf, buf))
		writeline(of, inf, buf, frigo);
	inf.close();
	of.close();
	return 0;
}
