#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

// -L. -lft

void print_list(t_list *head)
{
	t_list *current = head;
	while (current)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}

int main(void)
{
	t_list *head;
	if (!(head = (t_list *) malloc(sizeof(t_list))))
		return -1;

	ft_lstnew("SIMO");
	print_list(head);
}