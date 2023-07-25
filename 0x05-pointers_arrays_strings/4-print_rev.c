#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @S: string
 */
void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
