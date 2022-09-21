#include "main.h"

/**
 * main - void swap_int(int *a, int *b)
 * swaps value of two integers
 *@b: int
 *@a: int
 * Return : 0
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
