#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: string to be copied
 *
 * Return:: integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
