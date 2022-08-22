#include <iostream>
#include <cstdlib>

using namespace std;

// Function for Miles:
double getDistMiles() {
	// variable for result of function:
	double dist;
	// request for printing distance in miles:
	cout << "Please enter distance in miles: ";
	// Takes distance in miles:
	cin >> dist;
	// result :
	return dist;
}

// Function for converting miles to km:
double getDistKm(double dist) {
	// 1 ml in km:
	double kmInMile = 1.609344;
	// result
	return dist * kmInMile;
}

int main() {
	// change of console coding
	system("chcp 1251 > nul");
	//Variable for distance in miles:
	double distMile = getDistMiles();
	// Calculation:
	cout << "Distance (km): " << getDistKm(distMile) << endl;
	//DELAY
	system("pause > nul");
	return 0;
}