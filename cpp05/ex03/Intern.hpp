/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:26:32 by mravera           #+#    #+#             */
/*   Updated: 2023/07/28 14:37:51 by mravera          ###   ########.fr       */
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

	AForm *makeForm(std::string form, std::string target);

private:

	AForm*	newPPF(std::string target);
	AForm*	newRRF(std::string target);
	AForm*	newSCF(std::string target);
	std::string	formForm[3];

};

#endif
