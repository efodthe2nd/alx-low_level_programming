#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function to free a list
 * @head: argument element
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
