/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:00:33 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/01 13:06:30 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <iostream>
#include <Array.hpp>
#include <vector>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//


	Array<int> test;
	try
	{
		std::cout << test[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "tried to index an empty array" << std::endl;
		std::cout << e.what() << std::endl;
	}

	Array<double> dtest(10);
	Array<double> mtest(dtest);
	
	for (int i = 0; i < 10; ++i)
		dtest[i] = static_cast<double>(rand()) / 10;
	{
		Array<double> ctest = dtest;
		for (int i = 0; i < 10; ++i)
			ctest[i] = 0.0;
	}

	for (int i = 0; i < 10; ++i)
		if (mtest[i] != mtest[i])
			std::cout << "dtest content was modified!" << std::endl;

	Array<std::string>	stest(10);
	
    return 0;
}