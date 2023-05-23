/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:24:12 by mravera           #+#    #+#             */
/*   Updated: 2023/05/23 18:25:31 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class	Form {

public:

	Form(void);
	Form(std::string name, int gradeSigne, int gradeExe);
	Form(Form const & src);
	Form &	operator=(Form const & rhs);
	~Form(void);

	std::string	getName(void) const;
	bool		getSignedUp(void) const;
	int			getGradeSigne(void) const;
	int			getGradeExe(void) const;

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

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
