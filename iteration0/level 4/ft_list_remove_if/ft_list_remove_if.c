
// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
// $>

// Why Does Removal Work?

// When you execute *begin_list = (*begin_list)->next,
// you’re updating the current pointer (the pointer in
// the previous node’s next) to skip the current node.
// The old node is "orphaned" (detached from the list).

// For example:

//     [5] -> [3] -> [7]
//     When removing [3]:
//         *begin_list changes to [7].
//         [5] now points directly to [7].

//     [5] -> [7]
//     The node [3] is no longer accessible through the list,
//     but it still exists in memory unless freed.

// If you would intend to use the removed list element instead
// of freeing it, we couldn't.

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*free_node;

	// check if double pointer itself is NULL
	// or if the list is empty
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (*begin_list)
	{
		// explicit parenthesis could make order of operation clear
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			free_node = *begin_list;
			*begin_list = (*begin_list)->next;
			free(free_node->data);
			free(free_node);
		}
		else
			begin_list = &((*begin_list)->next);
	}
}

/*
tried to write a less obfuscated version...
didn't work out. Kept getting segfaults for no reason.
*/

/* Start of testing */

#include <stdio.h>

// Comparison function: returns 0 if the integers are equal
int	cmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

// Function to create a new node
t_list	*create_node(int data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = malloc(sizeof(int));
	if (!new_node->data)
	{
		free(new_node);
		return (NULL);
	}
	*(int *)(new_node->data) = data;
	new_node->next = NULL;
	return (new_node);
}

// Function to print the list
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d -> ", *(int *)(list->data));
		list = list->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	// Create a test linked list
	t_list *list = create_node(5);
	list->next = create_node(3);
	list->next->next = create_node(7);
	list->next->next->next = create_node(3);
	list->next->next->next->next = create_node(9);

	printf("Original list:\n");
	print_list(list);

	int ref = 3; // Reference data to remove

	ft_list_remove_if(&list, &ref, cmp);

	printf("List after removing %d:\n", ref);
	print_list(list);

	// Free remaining nodes in the list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp->data);
		free(temp);
	}
}