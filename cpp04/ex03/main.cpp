/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:09:07 by mravera           #+#    #+#             */
/*   Updated: 2023/05/21 15:16:50y mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/*
int	main(void) {

	std::cout << "Hello" << std::endl << std::endl;

	std::cout << "a -> "; Ice a;
	std::cout << "b -> "; const AMateria* b = new Ice();
	std::cout << "c -> "; const AMateria* c; c = b->clone();
	std::cout << "d -> "; const AMateria* d = new Ice(a);
	std::cout << "e -> "; AMateria* e; e = new Cure();

	std::cout << "a = " << a.getType() << std::endl;
	std::cout << "b = " << b->getType() << std::endl;
	std::cout << "c = " << c->getType() << std::endl;
	std::cout << "d = " << d->getType() << std::endl;
	std::cout << "e = " << e->getType() << std::endl;
	std::cout << std::endl << std::endl;

	Character* f = new Character;
	Character* g = new Character("Joe");
	Character* h = new Character(*g);
	Character i;
	std::cout << "f = " << f->getName() << std::endl;
	std::cout << "g = " << g->getName() << std::endl;
	std::cout << "h = " << h->getName() << std::endl;
	std::cout << "i = " << i.getName() << std::endl;

	*f = *g;
	std::cout << "f = g" << std::endl;
	std::cout << "f = " << f->getName() << std::endl;
	std::cout << "g = " << g->getName() << std::endl;
	std::cout << std::endl;
	g->equip(&a);
	g->equip(e);
	std::cout << "g = " << g->getName() << std::endl;
	g->unequip(5);
	g->use(0, i);
	g->use(1, *f);
	g->use(23, *f);
	g->unequip(0);

	std::cout << std::endl;
	std::cout << "b -> ";
	delete b;
	std::cout << "c -> ";
	delete c;
	std::cout << "d -> ";
	delete d;
	std::cout << "f -> ";
	delete f;
	std::cout << "g -> ";
	delete g;
	std::cout << "h -> ";
	delete h;

	return 0;
}
*/

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
