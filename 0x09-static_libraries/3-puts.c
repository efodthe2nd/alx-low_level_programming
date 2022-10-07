#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
