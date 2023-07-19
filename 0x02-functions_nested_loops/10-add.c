#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int add(int, int);

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

int add(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	return (sum);
}
