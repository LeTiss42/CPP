/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:47:38 by mravera           #+#    #+#             */
/*   Updated: 2023/05/22 00:06:20 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(Cure const & src);
	Cure &	operator=(Cure const & rhs);
	~Cure(void);

	Cure* clone() const;
	void use(ICharacter& target);

};

#endif
