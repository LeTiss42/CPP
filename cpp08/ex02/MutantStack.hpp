/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:50:59 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 14:36:23 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	
	MutantStack(void);
	MutantStack(MutantStack const & src);
	MutantStack & operator=(MutantStack const & rhs);
	~MutantStack(void);

};

# include "MutantStack.tpp"

#endif
