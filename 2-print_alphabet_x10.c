#include "main.h"


/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	for (; j <= 9; j++)
	{
		i = 97;

		for (; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
