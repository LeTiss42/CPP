/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:36 by mravera           #+#    #+#             */
/*   Updated: 2023/06/28 17:58:07 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cmath>
# include <vector>
# include <sstream>
# include <algorithm>

class PmergeMe {

public:

	PmergeMe(void);
	PmergeMe(PmergeMe const & src);
	PmergeMe & operator=(PmergeMe const & rhs);
	~PmergeMe(void);

	int		execVector(int argc, char **argv);
	void	dispVec(void);
	void	dispVecSimple(void);

private:

	std::vector<int> myvector;

	int		parsing(int argc, char **argv);
	int		doubleUp(void);
	int		bigSort(void);
	int		mergeIt(void);
	int		littleMerge(void);
	int		insertOne(size_t pos, std::vector<int> &small, std::vector<int> &big);
	int		jacob(int n);

};

#endif
