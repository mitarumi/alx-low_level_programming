/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
