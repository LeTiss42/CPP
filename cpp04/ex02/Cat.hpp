/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:17:14 by mravera           #+#    #+#             */
/*   Updated: 2023/03/24 00:11:15 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & src );
	Cat &	operator=( Cat const & rhs );
	virtual ~Cat( void );

	void	makeSound( void ) const;
	void	setIdea( int i, std::string idea );
	std::string	getIdea( int i );
	Brain*	getBrainPtr( void );

private:

	Brain*	_brain;

};

#endif
