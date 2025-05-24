#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @i: the number to be checked for absoluteness
 *
 * Return: Always zero
 *
 */
int _abs(int i)
{
	int result;

	if (i < 0)
	{
		result = (i * -1);

		return (result);
	}
	else
	{
		return (i);
	}
}
