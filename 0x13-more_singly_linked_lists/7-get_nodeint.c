#include "lists.h"

/**
  * get_nodeint_at_index - Get the node of a given linked list of type
  * listint_t according to a given index.
  * @head: A pointer to the  head of the linked list.
  * @index: The index of the structure we are looking for.
  *
  * Return: A pointer to the  structure at the given index on success.
  *         NULL on failure
  *
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
