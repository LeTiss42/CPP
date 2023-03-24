/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 02:11:50 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 15:29:39 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP 

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( ScavTrap const & src );
	ScavTrap &	operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	ScavTrap( std::string name );

	void	attack( const std::string& target);
	void	guardGate( void );

};

#endif
