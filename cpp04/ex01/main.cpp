/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:55:18 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 21:23:11 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main( void ) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;
	delete i;

	const int	n = 4;
	const Animal*	anitab[n];
	std::cout << std::endl;


	for (int i = 0; i < (n/2); i++)
		anitab[i] = new Dog();
	for (int i = (n/2); i < n; i++)
		anitab[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
	{
		anitab[i]->makeSound();
		delete anitab[i];
	}
	std::cout << std::endl;
	Dog	doggo;
	for (int i = 0; i < 100; i++)
		doggo.setIdea(i, "pouet");
	for (int i = 0; i < 100; i++)
		std::cout <<" doggo " << i << " : " << doggo.getIdea(i) << std::endl;
	std::cout << std::endl;
	Dog	rex(doggo);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "rex " << i << " : " << rex.getIdea(i) << std::endl;
	

	std::cout << std::endl;
	std::cout << "doggoptr = " << &doggo <<std::endl;
	std::cout << "rexptr   = " << &rex <<std::endl;
	std::cout << std::endl;
	std::cout << "doggo brain ptr = " << doggo.getBrainPtr() << std::endl;
	std::cout << "rex   brain ptr = " << rex.getBrainPtr() << std::endl;
	std::cout << std::endl;
	Cat	chat;
	Cat toto = chat;
	std::cout << std::endl;
	chat.makeSound();
	toto.makeSound();
	std::cout << std::endl;

	std::cout << "chat ptr = " << &chat <<std::endl;
	std::cout << "toto ptr = " << &toto <<std::endl;
	std::cout << std::endl;
	std::cout << "chat brain ptr = " << chat.getBrainPtr() << std::endl;
	std::cout << "toto brain ptr = " << toto.getBrainPtr() << std::endl;
	std::cout << std::endl;

/*
	const Animal* meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const WrongAnimal*	x = new WrongCat();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "WrongCat : " << std::endl;
	x->makeSound();


	std::cout << std::endl;
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete x;

	std::cout << std::endl;
	const Animal*	Paolo = new Dog();
	const Animal*	Tanguy = new Cat();
	Tanguy->setIdea(0, "prout");
	std::cout << std::endl;
	Dog	Kevin(Tanguy);
	std::cout << "Kevin pense a " << Kevin->getIdea(0) << std::endl;
	std::cout << "Tanguy pense a " << Tanguy->getIdea(0) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

*/
	return 0;
}
