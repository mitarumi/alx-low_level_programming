#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: 'the program's description'
 *     *
 *      * Return: Always 0 (Success)
 *       */

/**
 *  * print_alphabet_x10 - check the code
 *   *
 *    * Return: Void
 *     */

void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;
	while (i < 10){
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++){
			putchar(alphabet);
		}
		i++;
	}
}

int main(void)
{
	print_alphabet_x10();
	putchar('\n');
	return (0);
}
