/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:55:36 by mravera           #+#    #+#             */
/*   Updated: 2023/03/24 00:11:38 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define  WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	WrongCat &	operator=( WrongCat const & rhs );
	virtual ~WrongCat( void );

	void	makeSound( void ) const;

};

#endif
