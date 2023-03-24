/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:17:00 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:56:50 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & src );
	Dog &	operator=( Dog const & rhs );
	~Dog( void );

	void	makeSound( void ) const;

};

#endif
