#include "main.h"

/**
 * print_to_98 - prints natural number
 * @n: number to be checked
 *
 * Return: 0 if success
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n--;
			}
			printf("%d\n", n);
		}
	}
	if (n <= 98)
	{
		while (n <= 98)
		{
			if ( n != 98)
			{
				printf("%d, ", n);
				n++;
			}
			printf("%d\n", n);
		}
	}
}
