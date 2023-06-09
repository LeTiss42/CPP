/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:19:41 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 03:09:25 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span {

public:

	Span(void);
	Span(unsigned int N);
	Span(Span const & src);
	Span &	operator=(Span const & rhs);
	~Span(void);

	void	addNumber(int x);
	void	insertSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	void	dispContent(void);

	class SpanFullException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

	class SpanTooSmallException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

private:

	unsigned int		_N;
	std::vector<int>	_content;

};

#endif
