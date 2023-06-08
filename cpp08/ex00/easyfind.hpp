/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:45:44 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 21:25:31 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP 

# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int x);

# include "easyfind.tpp"

#endif
