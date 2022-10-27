#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int x)
{
	struct Node* temp = malloc(sizeof(struct Node));
	
	if (temp == NULL)
		printf("Error");
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	struct Node* temp;
	temp = head;

	printf("List is: \n");

	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	int i, j, k;

	printf("How many numbers?\n");
	scanf("%d", &i);

	for (j = 0; j < i; j++)
	{
		printf("Input a number \n");
		scanf("%d", &k);
		insert(k);
		print();
	}

	return (0);
	
}
