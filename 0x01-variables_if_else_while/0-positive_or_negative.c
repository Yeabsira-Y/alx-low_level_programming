#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * check if the generated number is a positive, a negative or a zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
