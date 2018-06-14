﻿// CS2_HW5_ex04 (12.20)
// Madelyn Carlson
// 6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// 12/20

template<typename T>

//shuffle function
void shuffle(vector<T>& v)
{
	//random number generator
	srand(time(NULL));

	//This won't really shuffle the vector
	int n = rand() % v.size;

	v[n] = v[i];
}

//PT -- try this:
/*
template <typename T>
void shuffle(vector<T>&v) {
    //Pick a random number somewhere near the size of the vector
    int turns = v.size() + rand() % 11 + 6;
    for (int i=0; i < turns; i++) {
        //Pick two random locations to swap
        int i1 = rand() % v.size(), i2 = rand() % v.size();
        T tmp = v[i1];
        v[i1] = v[i2];
        v[i2] = tmp;
    }
}*/


int j

int main()
{
	vector<int> v;

	cout << "Enter 10 integers: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> j;
		v.push_back(j);
	}
	//call shuffle function
	shuffle(v);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] <<  " " << endl;


    return 0;
}

