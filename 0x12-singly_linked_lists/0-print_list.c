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
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d]", h->len);
			printf(" %s \n", h->str);
		}
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}
