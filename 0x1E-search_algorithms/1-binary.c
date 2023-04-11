#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - uses binary algorithm to search for val
 * @array: array to be searched
 * @size: size of array
 * @value: value in array
 *
 * Return: index of element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t s, low, high;
	int i;

	if (array == NULL)
		return (-1);

	for (low = 0; high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
