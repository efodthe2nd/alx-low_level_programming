#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	list_t *head;
	
	head = NULL;
	add_node(&head, "alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "William");
	add_node(&head, "Efod");
	print_list(head);

	return (0);
}
