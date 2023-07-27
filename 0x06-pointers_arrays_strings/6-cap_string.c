#include "main.h"
/**
 * cap_string - function
 * @str: string
 * Return: Char
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] >= 'a' && str[index] >= 'z'')
		index++;
	if (str[index - 1] == ' ' ||
		in
