//============================================================================
// Name        : Module 3 Project 3.cpp
// Author      : PJ Hanson
// Version     :
// Copyright   :
// Description : Project 3 of Module 3
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double test1, test2, test3, test4, test5, avg;

	cout << "Type the first test score and press Enter";
	cin >> test1;
	cout << "Type the second test score and press Enter";
	cin >> test2;
	cout << "Type the third test score and press Enter";
	cin >> test3;
	cout << "Type the fourth test score and press Enter";
	cin >> test4;
	cout << "Type the fifth test score and press Enter";
	cin >> test5;

	avg = (test1 + test2 + test3 +test4 + test5)/5;
	cout << "Your Test Average is: " << fixed << setprecision(1) << avg;
return 0;
}
