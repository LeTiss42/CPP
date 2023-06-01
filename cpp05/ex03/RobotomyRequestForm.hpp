/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:27:07 by mravera           #+#    #+#             */
/*   Updated: 2023/05/31 15:29:46 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
	~RobotomyRequestForm(void);

	std::string	getTarget(void) const;
	void	action(void) const;

private:

	std::string	target;

};

#endif

