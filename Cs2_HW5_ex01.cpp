﻿// Cs2_HW5_ex01 (12.2)
// Madelyn Carlson
// 6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// 15/20

//PT -- arraySize is always an int, since it's a count of the number of items in the array. And
//      this function should always return the location of the item, which is also an int
// int linearSearch(const T list[], T key, int arraySize)
// -5

template < typename T >
T linearSearch(const T list[], T key, T arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	cout << linearSearch(4, 8) << endl;
	cout << linearSearch(3.0, 8.0) << endl;
	cout << linearSearch('A', 'B') << endl;

    return 0;
}
