/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:55:36 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 00:00:10 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define  WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	WrongCat &	operator=( WrongCat const & rhs );
	~WrongCat( void );

	void	makeSound( void ) const;

};

#endif
