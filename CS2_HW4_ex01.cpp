﻿//CS2_HW4_ex01 (11.1)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 10/20

int arrSz;
int avg;

void getAvg()
{
	int sum;

	sum = sum + arrSz;

	avg = (sum / arrSz);
}

int main()
{
	int num;
	int * ptr = &num;
	
	cout << "Enter the array size: " << endl;
	cin >> arrSz;

	//PT -- int *num = new int[arrSz];
	int * num = arrSz();

	//initialize array
	//PT -- have the loop go up to arrSz, and not 10
	//PT -- for (int i = 0; i < arrSz; i++)
	for (int i = 0; i < 10; i++)
		//PT -- read a number from the user into the array
		// cin >> num[i];
		cout << num[i] << endl;
	
	//PT -- calculate the average. In your function above, you'll want to use double
	//      values since an average isn't necessarily a whole number
	/*
	double avg;
	int sum;
	for (int i=0; i<srrSz; i++) {
		sum += num[i];
	}
	avg = static_cast<double>(sum) / arrSz;
	*/
	
	//PT -- now, get the number of values higher than the average
	/*
	int count = 0;
	for (int i=0; i<arrSz; i++) {
		if (num[i] > avg)
			count++;
	}
	cout << "number of items larger than the average (" << avg << ") is " << count << endl;
	*/
	
	//call average
	int (*ptr).getAvg();

		if(num > avg)

		delete[] ptr;

    return 0;
}

