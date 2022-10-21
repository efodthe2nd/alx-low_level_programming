#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node to beginning
 * @head: node name
 * @str: string data
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL & str != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
		{
			printf("Error!\n");
			return (NULL);
		}

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
		*head = new;

		return (new);
	}

	return (0);
}

/**
 * _strlen - prints length of string
 * @s: const string to count
 *
 * Return: int count value
 */

int _strlen(const char *s)
{
	int c =0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
