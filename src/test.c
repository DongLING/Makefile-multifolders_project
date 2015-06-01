/*
 * Filename: test.c
 */

#include <stdio.h>

#include "../include/test_add.h"
#include "../include/test_sub.h"

int main(void)
{
	int a = 3;
	int b = 2;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	printf("a + b = %d\n", test_add(a, b));
	printf("a - b = %d\n", test_sub(a, b));

	return 0;
}
