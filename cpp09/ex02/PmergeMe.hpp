/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:07:36 by mravera           #+#    #+#             */
/*   Updated: 2023/06/29 14:35:34 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cmath>
# include <vector>
# include <list>
# include <sstream>
# include <algorithm>

class PmergeMe {

public:

	PmergeMe(void);
	PmergeMe(PmergeMe const & src);
	PmergeMe & operator=(PmergeMe const & rhs);
	~PmergeMe(void);

	int		theMain(int argc, char **argv);
	int		execVector(void);
	int		execList(void);
	void	dispVec(void);
	void	dispVecSimple(void);
	void	dispLstSimple(void);

private:

	std::vector<int>	myvector;
	std::list<int>		mylist;

	int		parsing(int argc, char **argv);
	int		parsinglst(int argc, char **argv);

	int		doubleUp(void);
	int		doubleUplst(void);
	int		bigSort(void);
	int		bigSortlst(void);
	int		mergeIt(void);
	int		mergeItlst(void);
	int		littleMerge(void);
	int		littleMergelst(void);

	int		insertOne(size_t pos, std::vector<int> &small, std::vector<int> &big);
	int		insertOnelst(size_t pos, std::list<int> &small, std::list<int> &big);

	int		getlst(std::list<int> &mylist, int pos);
	std::list<int>::iterator	setlst(std::list<int> &mylist, int pos);
	int		jacob(int n);

};

#endif
