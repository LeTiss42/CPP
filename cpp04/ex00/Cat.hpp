/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:17:14 by mravera           #+#    #+#             */
/*   Updated: 2023/03/22 23:56:44 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & src );
	Cat &	operator=( Cat const & rhs );
	~Cat( void );

	void	makeSound( void ) const;

};

#endif
