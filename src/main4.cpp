#include <iostream>
#include "task4.h"

using namespace std;

int main() {
	char const *x = "123456789";
	char const *y = "00000001";
	cout<<sum((char*)x,(char*)y);
}