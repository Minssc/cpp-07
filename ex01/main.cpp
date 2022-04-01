/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:14:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 13:01:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int arr[10];
	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	iter(arr, 10, print);
	std::cout << std::endl;

	unsigned int arr2[16];
	arr2[0] = 1;
	arr2[1] = 1;
	for (int i =0; i < 16 - 2; ++i)
		arr2[i + 2] = arr2[i + 1] + arr2[i];

	iter(arr2, 16, print);
	std::cout << std::endl;

	std::string	arr3[5];
	arr3[0] = "hello";
	arr3[1] = "world";
	arr3[2] = "hello";
	arr3[3] = "42seoul";
	arr3[4] = ":D";

	iter(arr3, 5, print);
	return (0);
}