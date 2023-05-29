/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:07:25 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 15:07:26 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {

public:

	AForm(void);
	AForm(std::string name, int gradeSigne, int gradeExe);
	AForm(AForm const & src);
	AForm &	operator=(AForm const & rhs);
	~AForm(void);

	std::string	getName(void) const;
	bool		getSignedUp(void) const;
	int			getGradeSigne(void) const;
	int			getGradeExe(void) const;
	void		beSigned(Bureaucrat& b);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

private:

	const std::string	name;
	bool				signedUp;
	const int			gradeSigne;
	const int			gradeExe;

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
