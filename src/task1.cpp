#include <iostream>
#include "TASK1.h"

using namespace std;



unsigned long findValue(unsigned int min, unsigned max) {
	long value = max;
	while (proverka(value, min, max)) {
		value++;
	}
	cout << "" << value;
	return(value);
}


int proverka(int n, int min, int max) {
	int i;
	for (i = min; i < max + 1; i++) {
		if (n%i) {
			return(1);
		}
	}
	return(0);
}