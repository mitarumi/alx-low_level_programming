#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	while (a >= 'a', a <= 'Z')
	{
		putchar(a);

		a++;
	}

	putchar('\n');
	return (0);
}
