/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:41:23 by mravera           #+#    #+#             */
/*   Updated: 2023/05/31 14:27:20 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	~PresidentialPardonForm(void);

	std::string	getTarget(void) const;
	void	action(void) const;

private:

	std::string	target;

};

#endif
