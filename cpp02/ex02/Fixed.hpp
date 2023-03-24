/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:56:01 by mravera           #+#    #+#             */
/*   Updated: 2023/03/21 20:41:51 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );

	Fixed( int const x );
	Fixed( float const f );
	~Fixed( void );

	Fixed & operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator<( Fixed const & rhs );
	bool	operator>( Fixed const & rhs );
	bool	operator<=( Fixed const & rhs );
	bool	operator>=( Fixed const & rhs );

	bool	operator==( Fixed const & rhs );
	bool	operator!=( Fixed const & rhs );

	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhl ) const;

	Fixed &	operator++();
	Fixed &	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed	min( Fixed & a, Fixed & b );
	static Fixed	min( Fixed const & a, Fixed const & b );
	static Fixed	max( Fixed & a, Fixed & b );
	static Fixed	max( Fixed const & a, Fixed const & b );

private:

	int	val;
	int static const nbbit = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
