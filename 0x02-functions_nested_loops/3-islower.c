#include "main.h"

/**
 * _islower - main entry point
 * @c - character checked
 * Return: 1 if success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
