#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates array of char
*@size: size of memory allocated
*@c: character to be initialize
*
*Return: returns a char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}

