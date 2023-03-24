/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:18:46 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 23:22:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal {

public:

	AAnimal( void );
	AAnimal( AAnimal const & src );
	AAnimal &	operator=( AAnimal const & rhs );
	virtual ~AAnimal( void );

	std::string	getType( void ) const;
	virtual void		makeSound( void ) const = 0;

protected:

	std::string type;

};

#endif
