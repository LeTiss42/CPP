/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:12:08 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 13:31:29 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class	ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm(void);

	std::string	getTarget(void) const;
	void	action(void) const;

private:

	std::string	target;

};

#endif


