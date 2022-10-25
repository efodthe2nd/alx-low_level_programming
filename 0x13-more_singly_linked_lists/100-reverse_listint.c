#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: address of pointer to node
 *
 * Return: a pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	prev = NULL;
	curr = *head;
	next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
}
