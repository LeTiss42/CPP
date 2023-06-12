/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:07:20 by mravera           #+#    #+#             */
/*   Updated: 2023/06/12 15:29:45 by mravera          ###   ########.fr       */
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

	int	readData(void);

private:

	std::string						_filename;
	std::map<std::string, float>	_data;

};

#endif
