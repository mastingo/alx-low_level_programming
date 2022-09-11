#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *more headers goes there
 *main - prints whether last digit is greater
 *less than or equal
 *Return: Always 0 (success)
 *betty style doc for function main goes there
 **/
int main(void)
{
	int n;
	int L;
	char str[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = % 10

	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
		return (0);
}
