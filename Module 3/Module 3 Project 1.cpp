//============================================================================
// Name        : Module 3 Project 1.cpp
// Author      : PJ Hanson
// Version     :
// Copyright   :
// Description : Project 1 of Module 3
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double gasMileage, numGallons, numMiles;
cout << "Enter the number of gallons of gas the car can hold and press Enter.";
cin >> numGallons;
cout << "Enter the number of miles the car can drive on a full tank and press Enter.";
cin >> numMiles;
gasMileage = (numGallons * numMiles);
cout << "The gas mileage of the car is " << gasMileage;
return 0;
}
