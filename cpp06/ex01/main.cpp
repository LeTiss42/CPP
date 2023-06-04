/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 18:56:44 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main() {

	Data a;
	Data *b;
	uintptr_t c;
	b = &a;
	std::cout << "&a = "<< b << std::endl;
	c = Serializer::serialize(b);
	std::cout << "serialized &a = "<< c << std::endl;
	b = Serializer::deserialize(c);
	std::cout << "deserialized &a = " << b << std::endl;
	std::cout << "             &a = " << &a << std::endl;
	return 0;
}
