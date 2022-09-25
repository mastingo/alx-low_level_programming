#include <stdio.h>

/*
 *main - prints two digit numbers
 *in ascending order
 *
 * Return : 0
 */

int main(void)
{
	int low = '01';

	while (low < '100')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
