#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: character to be printed
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
