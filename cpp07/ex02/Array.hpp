/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 01:00:19 by mravera          ###   ########.fr       */
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
	~Array(void);

	void	size(void);

private:
	T		tab[];
	size_t	tabSize;

};

#endif
