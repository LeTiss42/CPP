/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:18:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 15:27:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( ClapTrap const & src );
	ClapTrap &	operator=( ClapTrap const & rhs );
	~ClapTrap( void );

	ClapTrap( std::string name );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	dispAll( void );

protected:

	std::string	_name;
	int			_hp;
	int			_maxhp;
	int			_ep;
	int			_ad;

};

#endif
