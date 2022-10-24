#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	int n;
	
	head = NULL;
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	n = print_listint(head);
	printf(" -> %d elements\n", n);
	n = pop_listint(&head);
	printf("- %d\n", n);
	print_listint(head);

	printf("%p\n" , (void *)head);

	return (0);
}
