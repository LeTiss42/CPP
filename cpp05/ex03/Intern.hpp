/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:26:32 by mravera           #+#    #+#             */
/*   Updated: 2023/06/01 17:26:23 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(Intern const & src);
	Intern &	operator=(Intern const & rhs);
	~Intern(void);

	AForm *makeForm(std::string form, std::string target) const;

private:

	std::string	formForm[3];

};

#endif
