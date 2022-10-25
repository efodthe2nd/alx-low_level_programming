#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints lists
 * @head: argument element
 *
 * Return: the number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	int count;

	if (head)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", head, head->n);
			head = head->next;
			count++;
		}

		return (count);
	}

	exit(98);
}
