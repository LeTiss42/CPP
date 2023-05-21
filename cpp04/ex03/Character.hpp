/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:49:48 by mravera           #+#    #+#             */
/*   Updated: 2023/05/21 22:33:18 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {

private:

	std::string	name;
	AMateria*	inv[4];

public:

	Character(void);
	Character(Character const & src);
	Character &	operator=(Character const & rhs);
	~Character(void);

	Character(std::string name);

	std::string	const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif
