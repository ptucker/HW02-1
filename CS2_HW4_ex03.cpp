﻿//CS2_HW4_ex03 (11.5)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

//17/20

int main()
{
	int * ptr = &small[];

	int small[8] = { 1,2,4,5,10,100,2,-22 };
	
	//PT -- use a for loop for this
	//  -3
	/*
	int smallest = small[0];
	for (int i=1; i<8; i++) {
		if (small[i] < smallest)
			smallest = small[i];
	}
	cout << "smallest: " << smallest << endl;
	*/

	if (small[0] < small[8])
		cout << "The smallest element is: " << *small;

	if (small[1] < small[8])
		cout << "The smallest element is: " << *small[1];

	if (small[2] < small[8])
		cout << "The smallest element is: " << *small[2];

	if (small[3] < small[8])
		cout << "The smallest element is: " << *small[3];

	if (small[4] < small[8])
		cout << "The smallest element is: " << *small[4];

	if (small[5] < small[8])
		cout << "The smallest element is: " << *small[5];

	if (small[6] < small[8])
		cout << "The smallest element is: " << *small[6];
	
	if (small[7] < small[8])
		cout << "The smallest element is: " << *small[7];

	else
		cout << "The smallest element is: " << small[8];

	delete[] ptr;

    return 0;
}

