#include <iostream>
//#include "Problem6.h"
using namespace std;

// Question 6

void problem6() {
	bool stopper;
    float ax, ay, bx, by;
    float middlepointX, middlepointY;

    cout << "Give the coordinates of each end point like this: 10 10\n";
    cin >> ax >> ay >> bx >> by;

    middlepointY =  ( ay + by ) /2;
    middlepointX =  ( ax + bx ) /2;

    cout << "The middle point of the line is: (" << middlepointX << ", " << middlepointY << ")" << endl;

	cin >> stopper;
}
