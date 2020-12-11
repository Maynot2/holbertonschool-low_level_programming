#include "lists.h"


/**
  * get_dnodeint_at_index - Returns the node at a given index.
  * @head: A pointer to a pointer to the head node of the list.
  * @index: The given index.
  *
  * Return: The node at the given index on  success
  *         NULL on failure
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
