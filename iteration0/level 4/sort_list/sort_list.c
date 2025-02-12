// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function
// pointer cmp to select the order to apply, and returns a pointer to the
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h
// that is provided to you. You must include that file
// (#include "list.h"), but you must not turn it in. We will use our own
// to compile your assignment.

// Functions passed as cmp will always return a value different from
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list
// in ascending order:

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*start;

	start = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	node5;
// 	t_list	node4;
// 	t_list	node3;
// 	t_list	node2;
// 	t_list	node1;
// 	t_list	*sorted;

// 	node5.data = 8;
// 	node5.next = NULL;
// 	node4.data = 3;
// 	node4.next = &node5;
// 	node3.data = 7;
// 	node3.next = &node4;
// 	node2.data = 1;
// 	node2.next = &node3;
// 	node1.data = 5;
// 	node1.next = &node2;
// 	sorted = sort_list(&node1, ascending);
// 	while (sorted)
// 	{
// 		printf("%d ", sorted->data);
// 		sorted = sorted->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
