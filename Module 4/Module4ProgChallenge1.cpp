//============================================================================
// Name        : Module 4 Programming Challenge 1.cpp
// Author      : PJ Hanson
// Version     :
// Copyright   :
// Description : Minimum/Maximum
//============================================================================

#include <iostream>
using namespace std;

int main() {

	long int x;
	long int y;

	cout << "Please enter a number and press [enter].";
	cin >> x;
	cout << "Please enter another number and press [enter].";
	cin >> y;

	x > y ? cout << "Your first number was larger than the second" : cout << "Your second number was larger than the first.";

	return 0;
}
