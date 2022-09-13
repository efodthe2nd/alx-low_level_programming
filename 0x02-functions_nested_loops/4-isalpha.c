#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character to be checked
 *
 * Return: 1 if success, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	return (0);
}

