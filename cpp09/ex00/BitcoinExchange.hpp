/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:07:20 by mravera           #+#    #+#             */
/*   Updated: 2023/06/13 16:50:51 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>

class BitChange {

public:

	BitChange(void);
	BitChange(std::string _dataSet);
	BitChange(BitChange const & src);
	BitChange & operator=(BitChange const & rhs);
	~BitChange(void);

	int		exchange(std::string filename);
	void	dispData(void);

	typedef std::map<std::string, std::string>::iterator	iter;

private:

	std::string						_dataSetName;
	std::map<std::string, std::string>	_map;

	int		readCsv(void);

};

#endif
