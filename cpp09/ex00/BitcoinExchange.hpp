/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:07:20 by mravera           #+#    #+#             */
/*   Updated: 2023/06/17 15:52:12 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <sstream>

class BitChange {

public:

	BitChange(void);
	BitChange(std::string _dataSet);
	BitChange(BitChange const & src);
	BitChange & operator=(BitChange const & rhs);
	~BitChange(void);

	int		exchange(std::string filename);
	void	dispData(void);

	typedef std::map<int, double>::iterator					iter;

private:

	std::string							_dataSetName;
	std::map<int, double>				_map;

	int		readCsv(void);
	int		dispThune(std::string filename);
	int		checkDate(std::string str);
	int		checkm(std::string month, std::string *res);
	int		checkd(std::string day, int month, std::string *res);
	int		dispValue(int date, std::string buf);
	double	checkValue(std::string value);

};

#endif
