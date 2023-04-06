//============================================================================
// Name        : Module2ProgChallenge11.cpp
// Author      : PJ Hanson
// Version     :
// Copyright   :
// Description : Programming Challenge 11 for Module 2
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	double numberOfGallons, town, highway, towndis, highwaydis;
	highway = 28.9;
	town = 23.5;
	numberOfGallons = 20.0;
	towndis = town * numberOfGallons;
	highwaydis = highway * numberOfGallons;

	cout << "The car can get a distance of " << towndis << " in town and " << highwaydis << " in the city!";
	return 0;

}
