#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number itself
 *
 * Return: the sighn of the number n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
