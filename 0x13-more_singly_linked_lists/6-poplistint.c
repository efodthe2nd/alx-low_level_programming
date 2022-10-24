#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 *
 * Return: int value of node
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int n = 0;

	if (*head != NULL)
	{
		newhead = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = newhead;

		return (n);
	}

	return (0);
}
