#include <iostream>
#include "task2.h"
#include <math.h>

using namespace std;


bool checkPrime(unsigned int value) {
	int i;
	int v=value;
	if (value == 2) {
		return true;
	}
	for (i = 2; i <= sqrt(v); i++) {
		if ((v%i == 0)) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	int i = 1;
	int ch = 2;
	while (i != n) {
		ch++;
		if (checkPrime(ch)) {
			i++;
		}
	}
	cout << ch << endl;
	return(ch);
}

unsigned long long nextPrime(unsigned long long value) {
	long long ch = value+1;
	while (!checkPrime(ch)) {
		ch++;
	}
	cout << ch;
	return ch;
}
