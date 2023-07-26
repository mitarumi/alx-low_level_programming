#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy string pointed to by src
 * @dest: copy from
 * @src: copy to
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < 1; x++)
		dest[x] = src[x];
	dest[1] = '\0';
	return (dest);
}
