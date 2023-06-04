/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:40:05 by mravera           #+#    #+#             */
/*   Updated: 2023/06/04 20:55:43 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {

public:

	virtual	~Base(void);
};

class A : public Base {

public:

	~A(void);
};

class B : public Base {

public:

	~B(void);
};

class C : public Base {

public:

	~C(void);
};

#endif
