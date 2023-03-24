/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:29:26 by mravera           #+#    #+#             */
/*   Updated: 2023/03/17 15:37:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	getfname(void) const;
	std::string	getlname(void) const;
	std::string	getnickname(void) const;
	std::string	getnumber(void) const;
	std::string	getdsecret(void) const;

	int	setinfo(void);

private:

	std::string	fname;
	std::string	lname;
	std::string	nickname;
	std::string	number;
	std::string	dsecret;

};

#endif
