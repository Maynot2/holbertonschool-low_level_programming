#include "lists.h"

/**
 * free_list - Free malloced elements of a linked list.
 * @head: A pointer to the first element of the list.
 *
 * Return: Nothing
 *
 */

void free_list(list_t *head)
{
	list_t *curr_node;
	list_t *prev_node;

	if (head->next)
	{
		curr_node = head;
		while (curr_node->next)
		{
			prev_node = curr_node;
			free(prev_node->str);
			free(prev_node);
			curr_node = curr_node->next;
		}
		free(curr_node->str);
		free(curr_node);
	}
	else
	{
		free(head->str);
		free(head);
	}
}
