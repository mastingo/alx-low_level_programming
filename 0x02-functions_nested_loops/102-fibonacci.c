#include <stdio.h>

/**
<<<<<<< HEAD
 *main - Write a program that computes and prints the sum of
=======
 * main - Write a program that computes and prints the sum of
>>>>>>> f8d838412e48ed0dc4456085189ebbf50054a51c
 * all the multiples of 3 or 5 below 1024 (excluded)
 * i: Integer
 * r: Result
 * Return: On success 1.
 *
 */
int main(void)
{
	int i;
	long a = 1, b = 2, r = 0;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %ld", r);
	}
	putchar('\n');
<<<<<<< HEAD
	return(0);
=======
	return (0);
>>>>>>> f8d838412e48ed0dc4456085189ebbf50054a51c
}
