#include "main.h"
/**
 * main - main block
 * Write a function that prints the alphabet, in lowercase, followed by a new line
 * Return: 0.
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
