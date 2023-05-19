/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:53:13 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 23:03:59 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGAAnimal_HPP
# define WRONGAAnimal_HPP

# include <iostream>
# include <string>

class	WrongAAnimal {

public:

	WrongAAnimal( void );
	WrongAAnimal( WrongAAnimal const & src );
	WrongAAnimal &	operator=( WrongAAnimal const & rhs );
	virtual ~WrongAAnimal( void );

	std::string	getType( void ) const;
	void		makeSound( void ) const;

protected:

	std::string type;

};

#endif
