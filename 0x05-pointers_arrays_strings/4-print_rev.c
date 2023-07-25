#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	char i;

	for (i = s[\0]; i--)
		printf("%c\n", i);
}
