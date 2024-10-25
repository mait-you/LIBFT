#include "libft.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
	int val;
	struct node *next;
} node_t;

void print_list(node_t *head)
{
	node_t *current = head;
	while (current)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}

void puch_list_end(node_t *head, int val)
{
	node_t *current = head;
	while (current->next)
		current = current->next;
	current->next = (node_t *)malloc(sizeof(node_t));
	current->next->val = val;
	current->next->next = NULL;
}

// void pell_list_start(node_t **head, int val)
// {
// 	node_t *current = head;
// 	current->next = (node_t *)malloc(sizeof(node_t))

// }

int main()
{
	node_t *head = NULL;
	if (!(head = (node_t *) malloc(sizeof(node_t))))
		return -1;
	head->val = 1;
	head->next = NULL;

	print_list(head);
	puch_list(head, 2);
	print_list(head);
}