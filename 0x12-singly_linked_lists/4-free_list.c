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
	list_t *old_head;

	while (head)
	{
		old_head = head;
		head = head->next;
		free(old_head->str);
		free(old_head);
	}
}
