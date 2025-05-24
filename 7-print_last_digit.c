#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @i: The number passed to the function
 *
 * Return: Always zero
 */

int print_last_digit(int i)
{
	int j;

	if (i >= 0)
	{
		j = (i % 10);

		_putchar(j + '0');
	}
	else
	{
		j = ((i % 10) * -1);

		_putchar(j + '0');
	}

	return (j);
}
