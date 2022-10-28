#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: argument int
 *
 * Return: the binary representation
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
 * _divide - divide the integer
 * @n: argument
 *
 * Return: returns the int
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
