#include <stdio.h>

/*typdef*/

typedef struct node
{
	int x;
	struct node *next;
}node;

/**
 * main - return integers
 * Retrun: always 0
 */

int main(int argc, char **argv)
{
	node root, elem2, elem3;
	root.x = 15;
	root.next = &elem2;
	elem2.x = -2;
	elem2.next = &elem3;
	elem3.x = 7;
	elem3.next == NULL;
	
	printf("First: %d\n", root.x);
	printf("Second: %d\n", elem2.x);
	printf("Third: %d\n", elem3.x);

	return (0);
}
