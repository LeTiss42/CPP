/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 17:15:26 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const & src);
	Array &	operator=(Array const & rhs);
	T & operator[](size_t i);
	~Array(void);

	size_t	size(void) const;
	void	disp(void) const;

private:
	T		*_content;
	size_t	_size;

};

# include "Array.tpp"

#endif
