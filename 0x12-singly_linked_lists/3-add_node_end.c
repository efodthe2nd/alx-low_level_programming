#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds new node at end
 * @head: previous node
 * @str: string data
 *
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
 * _strlen - Returns the length
 * @s: string
 *
 * Return: string length
 */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
