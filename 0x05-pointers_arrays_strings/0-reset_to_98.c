#include "main.h"
#include <stdio.h>

/* reset_to_98 - function for pointer */
void reset_to_98(int *n)
{
	int *n = &n;

	*n = 98;
}
