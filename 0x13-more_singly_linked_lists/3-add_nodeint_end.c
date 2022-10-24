#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at end
 * @head: node element
 * @n: int value of node elem
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	lastNode = malloc(sizeof(listint_t));


	if (newNode == NULL)
		return (NULL);

	if (lastNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = newNode;

		return (lastNode);
	}
}
