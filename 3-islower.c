#include "main.h"

/**
 * _islower - returns 1 is c is lowercase
 *
 *@c: the character being checked
 *
 * Return: 1
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
