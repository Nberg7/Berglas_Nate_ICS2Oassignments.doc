#include <iostream>
#include "Problem3.h"
using namespace std;

// Question 3

void problem3() {
	bool stopper;
	double length, seconds;

	cout << "Input the length and time of the ride in km and seconds\n";
	cin >> length >> seconds;
	cout << "The cost without surcharge is: " << ((seconds*15) + (length*75) + 150)/100 << "$\n";
	cout << "The cost with surcharge is: " << (((seconds*15) + (length*75) + 150)/100) * 1.5 << "$\n";
	cin >> stopper;
}