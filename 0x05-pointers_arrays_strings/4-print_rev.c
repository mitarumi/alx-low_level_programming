#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @S: string
 */
void print_rev(char *s)
{
	while (*s == '\0')
		putchar(*s--);

	putchar('\n');
}
