/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:53:38 by mravera           #+#    #+#             */
/*   Updated: 2023/03/19 21:32:05 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* res = new Zombie[N];
	for(int i = 0; i < N; i++)
		res[i].name = name;
	return (res);
}
