//============================================================================
// Name        : Module 4 Programming Challenge 5.cpp
// Author      : PJ Hanson
// Version     :
// Copyright   :
// Description : BMI
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	cout << "\tHello! This program is here to help you calculate your Body Mass Index, "
			<< "or BMI for short.\n\n" << "Please type your weight in pounds and press [enter].";
	int weight;
	cin >> weight;

	cout << "Now type your height in inches and press [enter].";
	int height;
	cin >> height;

	double BMI = (weight * 703 / (pow(height,2)));

	if (BMI > 25)
	{
		cout << "Your BMI is " << fixed << setprecision(1) << BMI << ", which means you are considered overweight.";
	}
	else if (BMI < 18.5)
	{
		cout << "Your BMI is " << fixed << setprecision(1) << BMI << ", which means you are considered underweight.";
	}
	else
	{
		cout << "Your BMI is " << fixed << setprecision(1) << BMI << ", which means you are considered your optimal weight. Congrats!";
	}


	return 0;
}
