/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:57:47 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 01:24:52 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

public:

	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );

private:

	std::string	name;

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
