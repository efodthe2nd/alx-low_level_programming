#include "search_algos.h"

/**
 * linear_search - Searches through an array for an index
 * @array: a pointer to the array
 * @size: is the number of elements in an array
 * @value: value to be searched for
 *
 * Return: first index where value is found
 *
 * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
