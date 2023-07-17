#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d", n);
	printf(" is %d", y);
	if (y > 5)
		printf(" and is greater than 5\n");
	else
		if (y == 0)
			printf(" and is 0\n");
	else
		if (y < 6 && y != 0)
			printf(" and is less than 6 and not 0\n");
	/* your code goes there */
	return (0);
}
