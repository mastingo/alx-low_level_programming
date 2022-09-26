#include <main.h>
#include <stdio.h>

/**
 *_memset - function fills the
 * first n bytes of the memory area pointed to
 * by @s with the constant byte @b
 * Returns a pointer to the memory area @s
 * @s : pointer to memory area
 * @b : place to be filled
 * @n : variable of number of bytes
 *
 * Return @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 0; i++;)
	*(s + i) = b;
	return (s);
}
