#include "main.h"

/**
 * print_last_digit - prints value of the last digit
 * n: character to be checked
 * Return: n if success
 */

int print_last_digit(int n)
{
	n = n % 10;
	
	if (n < 10)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}

	return (n);
}
