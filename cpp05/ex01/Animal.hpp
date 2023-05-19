/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:18:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/24 00:09:10 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {

public:

	Animal( void );
	Animal( Animal const & src );
	Animal &	operator=( Animal const & rhs );
	virtual ~Animal( void );

	std::string	getType( void ) const;
	virtual void		makeSound( void ) const;

protected:

	std::string type;

};

#endif
