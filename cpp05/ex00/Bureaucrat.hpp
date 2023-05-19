/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:18:46 by mravera           #+#    #+#             */
/*   Updated: 2023/05/09 16:47:08 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class	Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( std::string str );
	Bureaucrat( Bureaucrat const & src );
	Bureaucrat &	operator=( Bureaucrat const & rhs );
	virtual ~Bureaucrat( void );

	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		incGrade( void ) const;
	void		decGrade( void ) const;

protected:

	const	std::string _name;
	int					_grade;

};

#endif
