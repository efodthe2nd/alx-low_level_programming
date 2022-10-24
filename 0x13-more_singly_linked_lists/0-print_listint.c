#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of a node
 * @h: argument node
 *
 * Return: an int
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h  != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
