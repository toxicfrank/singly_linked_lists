#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
}node;
/**
 * main - tterating a linked list using for loop
 * Return: always 0
 */
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
	root.next->next->next->next = NULL;


	for (node *curr = &root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->x);
	}

	free(root.next->next->next);
	free(root.next);
	return (0);
}
