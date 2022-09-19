#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: character to be checked
 *
 * Return: 0 if success
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}
