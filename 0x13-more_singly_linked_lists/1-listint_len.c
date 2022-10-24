#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: argument node
 *
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
