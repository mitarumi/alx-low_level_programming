#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

/**
 * print_alphabet - check the code
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
