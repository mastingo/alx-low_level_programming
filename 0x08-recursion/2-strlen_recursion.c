#include "main.h"
#include "stdio.h"
int_strlen_recursion(char *s) {
	if(*s == '\0')
		return 0;
	return 1 + int_strlen_recursion(s+1);
}
