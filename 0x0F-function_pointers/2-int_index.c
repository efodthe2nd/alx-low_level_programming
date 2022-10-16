#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: int array
 * @size: size of the array
 * @cmp: pointer to an array
 *
 * Return: index of int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (0);
}
