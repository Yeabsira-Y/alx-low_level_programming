#include <stdio.h>

/**
* main - main block
* prints the lowercase alphabet in reverse followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');
	return (0);
}
