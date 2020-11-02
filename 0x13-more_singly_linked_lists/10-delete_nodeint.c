#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a given index without beaking
  * the linked list.
  * @head: A pointer to a pointer the  head of the linked list.
  * @index: The index at which the new node is to be inserted.
  *
  * Return: 1 on success.
  *        -1 on failure.
  *
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i = 0;

	current = *head;
	while (current)
	{
		if (i == index)
		{
			if (i == 0)
				*head = current->next;
			else
				prev->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}
