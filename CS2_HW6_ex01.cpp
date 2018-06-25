﻿// CS2_HW6_ex01 (13.1)
// Madelyn Carlson
// 6/14/18

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <srand>
using namespace std;


int main()
{
	ofstream fout;

	fout.open(Exercise13_1.txt, ios::app);

	if (fout.fail())
	{
		cout << "cant open file" << endl;
		return 0
	}

	//randomly generate 100 integers
	srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		//PT -- random numbers
		// fout << " " << rand() << endl;
		fout << " " << i << endl;
	}

	fout.close();

    return 0;
}

