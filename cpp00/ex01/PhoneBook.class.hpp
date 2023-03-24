/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:14:05 by mravera           #+#    #+#             */
/*   Updated: 2023/03/17 02:48:48 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.class.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	int		open(void);

private:

	Contact rep[8];

	int		dispone(std::string index) const;
	int		dispall(void) const;
	void	dispten(std::string str) const;
};

#endif
