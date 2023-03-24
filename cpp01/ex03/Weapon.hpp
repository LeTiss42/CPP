/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:38:11 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:34:36 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

private:

	std::string	type;

public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const & getType( void ) const;
	void				setType( std::string type);

};

#endif
