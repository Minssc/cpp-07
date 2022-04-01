/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:54:41 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 12:55:12 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_TPP__
#define __WHATEVER_TPP__

#include "whatever.hpp"

template <class T>
void	swap(T &a, T &b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template <class T>
T	&min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <class T>
T	&max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif