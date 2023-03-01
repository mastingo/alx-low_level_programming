<<<<<<< HEAD
#include <main.h>

/*
 * main - shows input
 * 
 * return : 0
 */

int main(void)
{
	void _puts_recursion("Puts with recursion\n");
	return(0);
=======
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
>>>>>>> f8d838412e48ed0dc4456085189ebbf50054a51c
}
