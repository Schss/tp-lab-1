#include <iostream>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y) {
	int n1;
	int n2;
	char *answ;
	if (strlen(y) > strlen(x)) {
		swap(x, y);
	}
	n1 = strlen(x);
	n2 = strlen(y);
	answ = new char[n1+2]();
	cout << answ;
	int pol = 0;
	int ost = 0;
	int k = 1;
	while ((n1 > 0) && (n2 > 0)) {
		*(answ + pol) = (((*(x + n1 - 1) - '0') + (*(y + n2 - 1) - '0')) % 10 + ost)+'0';
		ost = ((*(x + n1 - 1) - '0') + (*(y + n2 - 1) - '0')) / 10;
		n1--;
		n2--;
		pol++;
	}
	while (n1 > 0) {
		*(answ + pol) = ((*(x+n1-1) - '0') + ost) + '0';
		if (*(answ + pol) == ':') {
			*(answ + pol) = '0';
		}
		ost = ((*(x+n1-1) - '0') + ost) / 10;
		pol++;
		n1--;
	}
	if (ost) {
		*(answ + pol) = '1';
		k = 0;
	}
	if (k) {
		pol--;
	}
	int first = 0;
	int last = pol;
	char vsp;
	while (last > first) {
		swap(*(answ + first), *(answ + last));
		last--;
		first++;
	}
	cout << answ<<"\n";
	return(answ);
}