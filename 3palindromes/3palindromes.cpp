// 3palindromes.cpp : Defines the entry point for the console application.
//
#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <thread>
#include <chrono>
#include <string>

using namespace std;

#define f(x) for (int i = 0; i < x; ++i)

//All the functions will have nVec and n as parameters
vector<string> dig2(vector<int> nVec, int n) {

}

int main()
{
	int base;
	cout << "Enter the base of the number to decompose: ";
	cin >> base;
	cout << "Enter the number to decompose: ";
	vector<int> nVec; //Vector of ints where every position is a digit of the number we will decompose
	string s;
	cin >> s; //We enter the number as a string to make it easier to transform to a vector of ints
	for (auto c : s) nVec.push_back(c - '0');
	int n = nVec.size();
	//f(n) cout << nVec[i] << " ";
	//Sleep(2000);
	vector<string> result;
	switch (n) {
	case 1: cout << nVec[0] << endl;
	case 2: 
		result = dig2(nVec, n);
	}
}

