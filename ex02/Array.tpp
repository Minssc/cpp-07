/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:48:01 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 16:53:58 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_TPP__
#define __ARRAY_TPP__

template <typename T>
Array<T>::Array(): _array(0), _size(0)
{
	_array = new T[0];
}

template <typename T>
Array<T>::Array(const unsigned int &n): _array(0), _size(n)
{
	_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &a): _array(0), _size(0)
{
	*this = a;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
const Array<T>	&Array<T>::operator =(const Array<T> &a)
{
	_size = a.size(); 
	T	*tp = new T[_size];
	
	for (unsigned int i = 0; i < _size; ++i)
		tp[i] = a[i];
	delete[] _array;
	_array = tp;
	return (*this);
}

template <typename T>
T	&Array<T>::operator [](unsigned int idx)
{
	if (_size <= idx)
		throw std::exception();
	return (_array[idx]);
}

template <typename T>
const T	&Array<T>::operator [](unsigned int idx) const
{
	if (_size <= idx)
		throw std::exception();
	return (_array[idx]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif


