#include <stdio.h>

/**
* main - main block
* Print all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
