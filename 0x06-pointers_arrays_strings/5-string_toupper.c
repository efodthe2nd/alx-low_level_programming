#include "main.h"

/**
 * string_toupper - changes all lowercase
 * @s: string to change
 *
 * Return: address of s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}