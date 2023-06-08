/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:43:33 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 17:37:57 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		std::cout << "test scope" << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		std::cout << "trying numbers[-2]" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "trying numbers[750]" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "displaying tab" << std::endl;
	numbers.disp();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "[" << i << "] = [" << mirror[i] << "]" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << std::endl << "displaying after new random call" << std::endl << std::endl;
	numbers.disp();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "[" << i << "] = [" << mirror[i] << "]" << std::endl;
    delete [] mirror;//
    return 0;
}
