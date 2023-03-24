/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:57:10 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 17:06:42 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( FragTrap const & src );
	FragTrap &	operator=( FragTrap const & rhs );
	~FragTrap( void );

	FragTrap( std::string name );

	void	highFivesGuys( void );

};

#endif
