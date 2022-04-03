/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:39:23 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 16:53:20 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int	_size;

	public:
		Array();
		Array(const unsigned int &n);
		Array(const Array &a);
		~Array();

		const Array	&operator =(const Array &a);
		T	&operator [](unsigned int idx);
		const T	&operator [](unsigned int idx) const;

		unsigned int	size() const;
};

#include "Array.tpp"

#endif