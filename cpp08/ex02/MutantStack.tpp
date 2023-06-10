/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:51:50 by mravera           #+#    #+#             */
/*   Updated: 2023/06/10 17:06:44 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack(void) {

	std::cout << "+ Default MutantStack constructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src) {

	*this = src;
	std::cout << "+ Copy MutantStack constructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs) {

	//The member opbject "c" is used to access the underlying conatainer (here the deque container).
	//Stack has no operator= so we use the one of the underlying deque container.
	this->c = rhs.c;
	std::cout << "+ Assignation MutantStack operator called" << std::endl;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void) {

	std::cout << "- Dafault MutantStack destructor called" << std::endl;
	return ;
}

// ::container_type:: is used to access underlying container
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void) {

	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void) {

	return (this->c.end());
}
