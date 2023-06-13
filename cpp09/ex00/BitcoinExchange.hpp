/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:07:20 by mravera           #+#    #+#             */
/*   Updated: 2023/06/13 13:04:25 by mravera          ###   ########.fr       */
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
	BitChange(std::string filename);
	BitChange(BitChange const & src);
	BitChange & operator=(BitChange const & rhs);
	~BitChange(void);

	int	readCsv(void);

	typedef std::map<std::string, std::string>::iterator	iter;

private:

	std::string						_filename;
	std::map<std::string, std::string>	_data;

};

#endif
