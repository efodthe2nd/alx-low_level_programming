#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 *
 * Return: 1 if success.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
