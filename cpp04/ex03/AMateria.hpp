/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:22:05 by mravera           #+#    #+#             */
/*   Updated: 2023/05/19 11:46:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class	AMateria {

protected:

	std::string	type;

public:

	AMateria(void);
	AMateria(AMateria const & src);
	AMateria &	operator=(AMateria const & rhs);
	virtual ~AMateria(void);

	AMateria(std::string const & type);

	std::string	const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);

};

#endif
