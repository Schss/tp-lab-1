#include <iostream>
#include "task3.h"
#include <math.h>

using namespace std;



bool checkPrime(unsigned int value) {
	int i;
	if (value == 2) {
		//cout << "1";
		return true;
	}
	for (i = 2; i <= sqrt(value); i++) {
		if ((value%i == 0)) {
			//cout << "0";
			return false;
		}
	}
	//cout << "1";
	return true;
}

unsigned long long sumPrime(unsigned int hbound) {
	int ch;
	int sum = 0;
	for (ch = 2; ch < hbound; ch++) {
		if (checkPrime(ch)) {
			sum = sum + ch;
		}
	}
	cout << sum;
	return sum;
}

