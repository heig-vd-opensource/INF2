#include <stdlib.h>
#include <stdio.h>

void part_1() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pi1 = pi2;
}

void part_2() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pd = pi1;
}

void part_3() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pi1 = pd;
}

void part_4() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pv = pi1;
}

void part_5() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pv = &i;
}

void part_6() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	pv = pi1;
	pi2 = pv;
}

void part_7() {
	int i = 1, j = 2;
	int* pi1 = &i;
	int* pi2 = &j;
	double x = 3.0;
	double* pd = &x;
	void* pv;

	if(pi1 = pi2)
		printf("abcd");
}

int main(void) {

	part_1();
	part_2();
	part_3();
	part_4();
	part_5();
	part_6();
	part_7();

	return EXIT_SUCCESS;
}

