/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:18:46 by mravera           #+#    #+#             */
/*   Updated: 2023/05/29 15:09:08 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class	Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( std::string str );
	Bureaucrat( std::string str, int grade );
	Bureaucrat( Bureaucrat const & src );
	Bureaucrat &	operator=( Bureaucrat const & rhs );
	virtual ~Bureaucrat( void );

	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		incGrade( void );
	void		decGrade( void );
	void		signForm(AForm& f);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what(void) const throw();
	};

private:

	const	std::string _name;
	int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif
