#include "main.h"

/**
 * _isalpha - returns 1 is c is uppercase
 *
 *@c: the character being checked
 *
 * Return: 1
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
