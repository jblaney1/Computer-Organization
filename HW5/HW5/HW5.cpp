// HW5.cpp : Defines the entry point for the console application.
// Computer Organization
// Oct 18, 2018
// Joshua Blaney
#include "stdafx.h"
extern "C" int problem1_(int a, int b, int c);
extern "C" int problem2_(int a, int b, int c, int val);
extern "C" int problem3_(int a, int b, int c);
// Testing functions
int prob1Test(int a, int b);
int prob2Test(int a, int b, int c);
int prob3Test(int a, int b);
int main(){
	int a = 2, b = 1, c = 0, d = 0, val = 2, fail = 0, pass = 0;
		for (int i = 0; i < 1000; i++) {
			for (int j = 0; j < 1000; j++) {
				a = i;
				b = j;
				c = problem1_(a, b, c);
				d = prob1Test(a, b);
				if (c != d) { fail++; }
				else { pass++; }
			}}
		printf("Problem 1 pass:fail %d:%d\n", pass, fail);
		pass = 0;
		fail = 0;
		int testC = 0;
		for (int k = 1; k <= 1000; k++) {
			for (int m = 1; m <= 1000; m++) {
				a = k;
				b = m;
				c = 0;
				d = 0;
				c = problem2_(a, b, c, val);
				d = prob2Test(a, b, d);
				if (c != d) { fail++; }
				else { pass++; }
			}}
		printf("Problem 2 pass:fail %d:%d\n", pass, fail);
		pass = 0;
		fail = 0;
		for (int t = 0; t < 1000; t++) {
			for (int r = 0; r < 1000; r++) {
				a = t;
				b = r;
				c = problem3_(a, b, c);
				d = prob3Test(a, b);
				if (c != d) { fail++; }
				else { pass++; }
			}}
		printf("Problem 3 pass:fail %d:%d\n", pass, fail);
    return 0;
}

int prob1Test(int a, int b){
	if (a < b){return (a + 1);}
	else{return (a - b);}
}

int prob2Test(int a, int b, int c){
	for (a; a >= 1; a--){
		if (a % 2 == 0){c = c + b;}}
	return c;
}

int prob3Test(int a, int b){
	if ((a >= 0) && (b <= 2)){return (b + 5);}
	else{return b;}
}