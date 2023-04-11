#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches through an array for an index
 * @array: a pointer to the array
 * @size: is the number of elements in an array
 * @value: value to be searched for
 * Return: first index where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return -1;

	return 0;
	
}
