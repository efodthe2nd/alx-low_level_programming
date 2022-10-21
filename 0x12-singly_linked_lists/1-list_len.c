#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "string.h"

/**
 * list_len - prints lists of elements
 * @h: linked list
 *
 * Return: int of result
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
