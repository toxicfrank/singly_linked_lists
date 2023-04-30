#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	int y;
	struct node *next;
}node;

/**
 * main - storing data in a linked list
 * Return: always 0
 */

int main(int argc, char **argv)
{
	node root;
	root.x = 15;
	root.next = malloc(sizeof(node));
	root.next->x = -2;
	root.next ->next = malloc(sizeof(node));
	root.next->next->x = 22;
	root.next->next->next = NULL;

	printf("FIrst: %d\n", root.x);
	printf("Second: %d\n", root.next->x);
	printf("Third: %d\n", root.next->next->x);

	free(root.next->next);
	free(root.next);

	return (0);
}
