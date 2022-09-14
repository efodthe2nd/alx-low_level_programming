#include "main.h"

/**
 * print_last_digit - prints value of the last digit
 * @n: character to be checked
 * Return: n if success
 */

int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l < 0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (1);
}
