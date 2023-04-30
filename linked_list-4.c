#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
}node;

int main(void)
{
	node root;

	root.x = 15;
	root.next = malloc(sizeof(node));
	root.next->x = 2;
	root.next->next = malloc(sizeof(node));
	root.next->next->x = 30;
	root.next ->next->next = malloc(sizeof(node));
	root.next->next->next->x = 45;

	node *curr = &root;

	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;

	}

	return (0);
}