#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lower case
 *
 * Return: Void
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
