#include "main.h"

/**
 * factorial - returns factorial
 * @n: integer factorial
 *
 * Return: n
 */

int factorial(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
