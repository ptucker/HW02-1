﻿//CS2_HW4_ex02 (11.3)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 17/20

int *list2 = NULL;

//given function header
int* doubleCapacity(const int* list, int size)
{
	int* ptr = new int[size];
	//PT -- actually, you don't want this statement. The above will create the new
	//      array for you. This line overwrites that value.
	ptr = list2;
	
	//PT -- need to copy the contents from the old list to the new one
	// -3
	/*
	//size/2 since you pass in the double size value when you call this function
	for (int i=0; i<size/2; i++) {
		ptr[i] = list[i];
	}
	*/

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
	//PT -- need a for loop here, but after you allocate list below
	cin >> values;

	//initialize array
	list = new int[size];
	//for (int i=0; i<size; i++)
	//    cin >> list[i];

	int* list = values;

	//array double 
	size2 = size * 2;

	list2 = doubleCapacity(list, size2);
	
	//PT -- clean up afterwards
	// delete[] list;
	// delete[] list2;

    return 0;
}

