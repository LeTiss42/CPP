/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:17:00 by mravera           #+#    #+#             */
/*   Updated: 2023/03/24 00:11:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog( void );
	Dog( Dog const & src );
	Dog &	operator=( Dog const & rhs );
	virtual ~Dog( void );

	void	makeSound( void ) const;
	void	setIdea( int i, std::string idea );
	std::string	getIdea( int i );
	Brain*	getBrainPtr( void );

private:

	Brain*	_brain;

};

#endif
