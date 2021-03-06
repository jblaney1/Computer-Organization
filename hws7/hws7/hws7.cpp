// hws7.cpp : Defines the entry point for the console application.
// Joshua Blaney

#include "stdafx.h"

extern "C" int problem1_(int a);
extern "C" int problem2_(int x, int y, int z);

int cproblem1(int a);
int cproblem2(int x, int y, int z);

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, fail = 0, pass = 0;
	for (int i = 0; i < 1000; i++) {
		a = i;
		c = problem1_(a);
		d = cproblem1(a);
		if (c != d) { fail++; }
		else { pass++; }
	}
	printf("Problem 1 pass:fail %d:%d\n", pass, fail);
	pass = 0;
	fail = 0;
	for (int k = 1; k <= 10000; k++) {
		for (int m = 1; m <= 10000; m++) {
			int j = m % 1000;
			a = k;
			b = m;
			e = j;
			c = problem2_(a, b, e);
			d = cproblem2(a, b, e);
			if (c != d) { fail++; }
			else { pass++; }
		}
	}
	printf("Problem 2 pass:fail %d:%d\n", pass, fail);
    return 0;
}

int cproblem1(int a)
{
	return (a * (9.0 / 5.0)) + 32;
}

int cproblem2(int x, int y, int z) 
{
	return ((2 * x) - y + z) / 4;
}