#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	listint_t *node;
	int sum;
	int n;
	
	head = NULL;
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	n = print_listint(head);
	printf(" -> %d elements\n", n);
	sum = sum_listint(head);
	printf("sum = %d\n", sum);

	return (0);
}
