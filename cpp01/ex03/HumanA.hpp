/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:44:48 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:45:24 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:

	std::string	name;
	Weapon&		weapon;

public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	void	attack( void );

};

#endif
