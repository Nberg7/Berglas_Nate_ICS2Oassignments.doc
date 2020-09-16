#include <iostream>
#include "Problem2.h"
using namespace std;

// Question 2

void problem2() {
	bool stopper;
	double a, b, c;

	cout << "Input three numbers\n";
	cin >> a >> b >> c;
	cout << "The average of the three numbers is: " << (a+b+c)/3 << endl;

	cin >> stopper;
}