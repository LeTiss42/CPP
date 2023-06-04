/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:52:40 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 18:52:47 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class	Serializer {

public:

	Serializer( void );
	Serializer( Serializer const & src );
	Serializer &	operator=( Serializer const & rhs );
	~Serializer( void );

	static	uintptr_t serialize(Data* ptr);
	static	Data* deserialize(uintptr_t raw);
};

#endif
