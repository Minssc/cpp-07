/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:14:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/30 22:46:30 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

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

int	main()
{
	int arr[10];
	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	iter(arr, 10, ::print);
	std::cout << std::endl;

	unsigned int arr2[16];
	arr2[0] = 1;
	arr2[1] = 1;
	for (int i =0; i < 16 - 2; ++i)
		arr2[i + 2] = arr2[i + 1] + arr2[i];

	iter(arr2, 16, ::print);
	return (0);
}