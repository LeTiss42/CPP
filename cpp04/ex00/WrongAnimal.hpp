/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:53:13 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:58:58 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	WrongAnimal &	operator=( WrongAnimal const & rhs );
	virtual ~WrongAnimal( void );

	std::string	getType( void ) const;
	void		makeSound( void ) const;

protected:

	std::string type;

};

#endif
