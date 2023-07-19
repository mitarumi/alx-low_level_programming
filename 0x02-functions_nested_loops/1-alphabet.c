#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	void print_alphabet(void)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
			printf("%c\n", alphabet);

	}

	print_alphabet();
	return (0);

}
