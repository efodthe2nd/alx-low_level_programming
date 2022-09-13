#include "main.h"

/**
 * print_sign - prints the sign of num
 * @n: character to be checked
 *
 * Return: 1 if > '0', 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
