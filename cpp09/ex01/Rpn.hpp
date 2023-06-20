/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:36 by mravera           #+#    #+#             */
/*   Updated: 2023/06/20 16:37:06 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>

class Rpn {

public:

	Rpn(void);
	Rpn(Rpn const & src);
	Rpn & operator=(Rpn const & rhs);
	~Rpn(void);

	int	exec(std::string str);

private:

	std::stack<int>	_data;

	int	detect(std::string str);
	int	isToken(int	c);
	int	ope(char token);

};

#endif
