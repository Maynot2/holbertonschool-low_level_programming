#include "lists.h"

/**
  * insert_nodeint_at_index - Insert a new node at a given index.
  * @head: A pointer to a pointer the  head of the linked list.
  * @idx: The index at which the new node is to be inserted.
  * @n: The value of the new node as an integer.
  *
  * Return: The address of the new node on success.
  *         NULL on failure
  *
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *current, *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	current = *head;
	while (current)
	{
		if (idx == 0)
		{
			new->next = current;
			*head = new;
			return (new);
		}
		if (i == idx)
		{
			new->next = current;
			prev->next = new;
			return (new);
		}
		prev = current;
		current = current->next;
		i++;
	}

	free(new);
	return (NULL);
}
