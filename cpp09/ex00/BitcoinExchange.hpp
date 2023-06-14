/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:07:20 by mravera           #+#    #+#             */
/*   Updated: 2023/06/14 16:44:42 by mravera          ###   ########.fr       */
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
	std::map<int, double>				_map;	//test with int/float format

	int		readCsv(void);							//for string map format
	int		checkDate(std::string str);

};

#endif
