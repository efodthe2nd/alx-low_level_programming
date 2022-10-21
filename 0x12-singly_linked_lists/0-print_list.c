#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints elems
 * @h: const elem
 *
 * Return: elem
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	return (count);
}
