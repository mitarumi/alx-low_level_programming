#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	char *y = str;
	int t = 0;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (o = 0; 0 <= t; o++)
	{
		if (i % 2 == 0)
			putchar(str[o]);
	}

	putchar('\n');
}
