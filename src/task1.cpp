#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <math.h>

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long num = 1;
	for (int i = min; i < max; i++)
	{
		num = lcm(num, i);
	}
	return num;
}

int gcd(int a, int b)
{
	int t;
	while (b > 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int lcm(int a, int b)
{
	return (abs(a * b)) / gcd(a, b);
}