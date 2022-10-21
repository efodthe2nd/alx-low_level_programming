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
	list_t *temp, *new_list;

	if (head != NULL & str != NULL)
	{
		temp = malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);


		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			new_list = *head;

			while (new_list->next != NULL)
				new_list = new_list->next;

			new_list->next = temp;
			return (new_list);
		}
	}

	return (NULL);
}

/**
 * _strlen - calculates length of string
 * @s: string
 *
 * Return: int
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	return (count);
}

