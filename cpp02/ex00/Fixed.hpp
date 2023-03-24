/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:56:01 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 17:02:48 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed & operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int	val;
	int static const nbbit = 8;

};

#endif
