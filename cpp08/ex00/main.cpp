/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:43:33 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 21:41:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void) {

    int myints[] = {0, 1 ,2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i <= 10; i++)
        std::cout << myints[i] << ", ";
    std::cout << std::endl;
    std::vector<int> vect (myints, myints + 11);
    for (int i = 0; i <= 10; i++)
        std::cout << vect[i] << ", ";
    std::cout << std::endl;
    std::cout << *easyfind(vect, 5) << std::endl;
    std::cout << *easyfind(vect, 0) << std::endl;
    std::cout << *easyfind(vect, 10) << std::endl;
    std::cout << std::endl << "vect =";
    for (std::vector<int>::iterator it = easyfind(vect, 0); it != easyfind(vect, 25); ++it)
        std::cout << ' ' << *it;
    std::cout << std::endl;
    return 0;
}
