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
	add_node_end(&head, "alexandro");
	add_node_end(&head, "Asaia");
	add_node_end(&head, "Augustin");
	add_node_end(&head, "William");
	add_node_end(&head, "Efod");
	print_list(head);

	return (0);
}
