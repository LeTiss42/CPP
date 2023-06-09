/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:51:50 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 14:39:52 by mravera          ###   ########.fr       */
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

	*this = rhs;
	std::cout << "+ Assignation MutantStack operator called" << std::endl;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void) {

	std::cout << "- Dafault MutantStack destructor called" << std::endl;
	return ;
}
