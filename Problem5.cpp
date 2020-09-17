#include <iostream>
#include <cmath>
//#include "Problem5.h"
using namespace std;

// Question 5

void problem5() {
	bool stopper;
	int aArray[4], bArray[4];
	int a, b;
    cout << "Input two four digit numbers\n";
    cin >> a >> b;

     aArray[0] = floor(a / 1000);
        a -= aArray[0] * 1000;
        aArray[1] = floor(a / 100);
        a -= aArray[1] * 100;
        aArray[2] = floor(a / 10);
        a -= aArray[2] * 10;\
        aArray[3] = floor(a / 1);
        a -= aArray[3] * 1;

    bArray[0] = floor(b / 1000);
        b -= bArray[0] * 1000;
        bArray[1] = floor(b / 100);
        b -= bArray[1] * 100;
        bArray[2] = floor(b / 10);
        b -= bArray[2] * 10;\
        bArray[3] = floor(b / 1);
        b -= bArray[3] * 1;
 
  cout << bArray[3] + aArray[3] << bArray[2] + aArray[2] << bArray[1] + aArray[1] << bArray[0] + aArray[0] << endl;
	cin >> stopper;
}
