#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary format
 * @n: argument int
 *
 * Return: binary format of int
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
 * _divide - divides the int
 * @n: accepts int
 *
 * Return: nothing
 */

void _divide(unsigned long int n)
{
	if (n < 1)
		return;
	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
