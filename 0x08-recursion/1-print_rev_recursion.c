#include "main.h"

void _print_rev_recursion(char *s) {
	if(*s == '\0')
	       return;
	
	print_rev_recursion(s + 1);
	putchar(*s);
}

