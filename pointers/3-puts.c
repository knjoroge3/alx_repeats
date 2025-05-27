#include "main.h"

/**
 * _puts - prints the string to the stdout
 *
 * @str: Pointer to the string array
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
