#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
}node;

/*Prototype function*/
void insert_end(node **root, int value);
/**
 * main - easier method to add elements in a linked list
 * Return: always 0
 */

int main(int argc, char **argv)
{
	node *root = malloc(sizeof(node));
	
	if (root == NULL)
	{
		exit(2);
	}

	root->x = 15;
	root->next = NULL;

	insert_end(&root, -2);
	insert_end(&root, 14);
	insert_end(&root, 59);

	for (node *curr = root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->x);
	}
	return (0);
}	

void insert_end(node **root, int value)
{
	node *new_node = malloc(sizeof(node));
	if (new_node == NULL)
		exit(1);
	new_node->next = NULL;
	new_node->x = value;

	if (*root == NULL)
	{
		*root = new_node;
		return;
	}
	node *curr = *root;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}
