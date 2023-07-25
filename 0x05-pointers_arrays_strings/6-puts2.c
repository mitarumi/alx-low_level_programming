#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		i++;
		if (i % 2 == 0)
			putchar(str[i]);
	}

	putchar('\n');
}
