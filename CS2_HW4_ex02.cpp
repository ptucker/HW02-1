//CS2_HW4_ex02 (11.3)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int *list2 = NULL;

//given function header
int* doubleCapacity(const int* list, int size)
{
	int* ptr = new int[size];
	ptr = list2;

	return ptr;
}


int main()
{
	int size;
	int size2;
	int values;
	int *list = NULL;

	//ask user for size of array
	cout << "Enter the size of array: " << endl;
	cin >> size;

	cout << "Enter values for the array: " << endl;
	cin >> values;

	//initialize array
	list = new int[size];

	int* list = values;

	//array double 
	size2 = size * 2;

	list2 = doubleCapacity(list, size2);

    return 0;
}

