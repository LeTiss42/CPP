/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:54:16 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 00:24:23 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *tab, size_t s, void(*f)(T &)) {

	size_t	i = 0;

	while (i < s)
		f(tab[i++]);
	return ;
}

#endif
