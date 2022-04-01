/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:58:44 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 12:59:20 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_TPP__
#define __ITER_TPP__

#include "iter.hpp"

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