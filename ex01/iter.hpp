/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:18:11 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/30 16:25:10 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <class T>
void	print(T &a)
{
	std::cout << a << std::endl;
}

template <class T>
void	iter(T *begin, const unsigned int &len, void (*f)(T &a))
{
	for (unsigned int i = 0; i < len; ++i)
		f(begin[i]);
}

#endif