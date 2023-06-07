/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/06/07 20:43:11 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &x, T &y) {

	T	buff;

	buff = x;
	x = y;
	y = buff;
	return ;
}

template <typename T>
T	&min(T &x, T &y) {

	if (x < y)
		return x;
	return y;
}

template <typename T>
T	&max(T &x, T &y) {

	if (x > y)
		return x;
	return y;
}

#endif
