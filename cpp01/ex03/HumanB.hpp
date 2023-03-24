/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:21:56 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:45:54 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:

	std::string name;
	Weapon		*arme;

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void );
	void	setWeapon( Weapon &x );

};

#endif
