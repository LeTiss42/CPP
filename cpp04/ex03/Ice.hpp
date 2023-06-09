/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:15:26 by mravera           #+#    #+#             */
/*   Updated: 2023/05/22 00:06:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(Ice const & src);
	Ice &	operator=(Ice const & rhs);
	~Ice(void);

	Ice* clone() const;
	void use(ICharacter& target);

};

#endif
