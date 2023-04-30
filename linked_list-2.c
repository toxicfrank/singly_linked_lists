#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	int y;
	struct node *next;
}node;

/**
 * main - return integer
 * Return: always 0
 */

int main(int argc, char **argv)
{
	node root;
	root.x = 15;
	root.next = malloc(sizeof(node));
	root.next->x = -2;
	root.next->y = -4;
	root.next->next = NULL;

	printf("FIrst: %d\n", root.x);
	printf("Second: %d\n", root.next->x);
	printf("Third: %d\n", root.next->y);

	free(root.next);

	return (0);
}
