#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: The original linked
 * @str: The string to add
 *
 * Return: The address of the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(const char *s)
{
	int c;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
