#include "main.h"
#include <stdio.h>

/**
 * _strlen - show the length of a string
 *
 * @S: string
 *
 * Return: lenth of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
