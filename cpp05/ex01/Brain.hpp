/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:03:58 by mravera           #+#    #+#             */
/*   Updated: 2023/03/23 17:15:43 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

public:

	Brain( void );
	Brain( Brain const & src );
	Brain &		operator=( Brain const & rhs );
	~Brain( void );

	std::string	ideas[100];

};

#endif
