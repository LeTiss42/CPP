/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:44:03 by mravera           #+#    #+#             */
/*   Updated: 2023/06/10 17:09:05 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void) {

	MutantStack<int>	a;
	a.push(25);
	a.push(35);
	MutantStack<int>	b;
	b = a;
	MutantStack<int>	c(b);
	std::cout << "a.size = " << a.size() << std::endl;
	std::cout << "a.top() = " << a.top() << std::endl;
	std::cout << std::endl;
	std::cout << "b.size = " << b.size() << std::endl;
	std::cout << "b.top() = " << b.top() << std::endl;
	std::cout << std::endl;
	std::cout << "c.size = " << c.size() << std::endl;
	std::cout << "c.top() = " << c.top() << std::endl;
	std::cout << std::endl;
	std::cout << "THE END" << std::endl;
	std::cout << "subject main for test below" << std::endl << std::endl;

MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::cout << std::endl << "test with different container of type list" << std::endl;

std::list<int> mylist;
mylist.push_back(5);
mylist.push_back(17);
std::cout << mylist.back() << std::endl;
mylist.pop_back();
std::cout << mylist.size() << std::endl;
mylist.push_back(3);
mylist.push_back(5);
mylist.push_back(737);
//[...]
mylist.push_back(0);
std::list<int>::iterator itl = mylist.begin();
std::list<int>::iterator itel = mylist.end();
++itl;
--itl;
while (itl != itel)
{
std::cout << *itl << std::endl;
++itl;
}
std::list<int> t(mylist);
return 0;
}
