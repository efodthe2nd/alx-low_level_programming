#include "main.h"

/**
 * _islower - main entry point
 * @c: character checked
 *
 * Return: 1 if success. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
