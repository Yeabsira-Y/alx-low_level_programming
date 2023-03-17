#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print alphabet in lower case followe by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
