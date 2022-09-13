#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural number
 * @n: number to be checked
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	} else if (n > 98)
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", 98);
	} else if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;

		}
		printf("%d\n", 98);
	}
}
