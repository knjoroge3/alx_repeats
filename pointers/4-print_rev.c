#include "main.h"

/**
 * print_rev - reverses a string being printed out
 *
 * @s: contains the string to be reversed.
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	r = i - 1;

	for (; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
