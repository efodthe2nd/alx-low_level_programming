#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: 0 if success
 */

void times_table(void)
{
	int one;
	int two;
	int mul;

	for (one = 0; one <= 9; one++)
	{
		for (two = 0; two <= 9; two++)
		{
			mul = one*two;
		if (mul <= 9)
		{	_putchar(' ');
			_putchar(' ');
		}
			_putchar(mul + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
