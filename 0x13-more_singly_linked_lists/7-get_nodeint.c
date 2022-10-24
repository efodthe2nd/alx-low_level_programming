#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node int at index
 * @head: argument element
 * @index: nth position of node
 *
 * Return: node at nth number
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	count = 0;
	temp = malloc(sizeof(listint_t));
	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}

		count++;
		temp = temp->next;
	}

	return (NULL);
}


