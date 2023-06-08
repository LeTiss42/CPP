/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 01:01:24 by mravera           #+#    #+#             */
/*   Updated: 2023/06/08 17:30:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) {
	
	std::cout << "+ Default Array constructor called" << std::endl;
	_content = new T[0];
	_size = 0;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) {

	_content = new T[n];
	_size = n;
	for (unsigned int i = 0; i < n; i++)
		_content[i] = 0;
	std::cout << "+ parametric Array constructor called with size " << _size << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(Array const & src) {

	_content = new T[src._size];
	_size = src._size;
	for (unsigned int i = 0; i < src._size; i++)
		_content[i] = src._content[i];
	std::cout << "+(=) Copy Array constructor called with size " << _size << std::endl;
	return ;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {

	delete[] _content;
	_content = new T[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		_content[i] = rhs._content[i];
	return (*this) ;
}

template <typename T>
T & Array<T>::operator[](size_t i) {

	if (i >= _size)
	 	throw std::out_of_range("Error : Index out of range!");
	return (_content[i]);
}

template <typename T>
Array<T>::~Array(void) {

	delete[] _content;
	std::cout << "- Default Array destructor called" << std::endl;
	return ;
}

template <typename T>
size_t	Array<T>::size(void) const {

	return (_size);
}

template <typename T>
void	Array<T>::disp(void) const {

	size_t x;
	if (_size < 10)
		x = _size;
	else
		x = 10;
	for (size_t i = 0; i < x; i ++)
		std::cout << "[" << i << "] = [" << _content[i] << "]" << std::endl;
	return ;
}
