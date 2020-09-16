#include <iostream>
#include "Problem1.h"
using namespace std;

// Question 1. A and B

void Problem1() {
	float c, f, question;
	bool stopper;

	cout << "(1) Fahrenheit to Celsius || (2) Celsius to Fahrenheit\n";
	cin >> question;
	if (question == 1)  {
		cout << "What is the temperature in Fahrenheit?\n";
		cin >> f;
		c = (f - 32) / 1.8;
		cout << c;
	}
	else if (question == 2) {
		cout << "What is the temperature in Celsius?\n";
		cin >> c;
		f = (c * 1.8) + 32;
		cout << f;
	}
	else {
		cout << "Incorrect input, please restart proggram\n";
	}

	cin >> stopper;
}