#include <stdio.h>

/**
 * main - entry point
 * Description - Prints the alphabets in lowercase and uppercase consecutively
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);

	}
	putchar('\n');

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	return (0);
}

