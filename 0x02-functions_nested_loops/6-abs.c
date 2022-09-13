#include "main.h"

/**
 * _abs - returns absolute value of int
 * @n: value returned
 *
 * Return: 0 if success.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
