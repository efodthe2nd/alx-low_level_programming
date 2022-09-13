#include "main.h"

/**
 * print_alphabet_x10 - main entry function
 * Return: 0 if success
 */

print_alphabet_x10()
{
	int i;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
