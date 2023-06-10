/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:50:59 by mravera           #+#    #+#             */
/*   Updated: 2023/06/10 16:59:59 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

//stacks are container adaptors and needs specific container class as underlying container.
//if no other container is specified when calling a stack (as below), the "deque" standard
//container is used.

template <typename T>
class MutantStack : public std::stack<T> {

public:
	
	MutantStack(void);
	MutantStack(MutantStack const & src);
	MutantStack & operator=(MutantStack const & rhs);
	~MutantStack(void);

	typedef typename std::stack<T>::container_type::iterator	iterator;
	typename std::stack<T>::container_type::iterator	begin(void);
	iterator	end(void);

};

# include "MutantStack.tpp"

#endif
