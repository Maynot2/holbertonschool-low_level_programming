#include "lists.h"


/**
  * insert_dnodeint_at_index - Inserts node at given index.
  * @h: A pointer to a pointer to the head node of the list.
  * @idx: The given index.
  * @n: The value of the new node to insert.
  *
  * Return: The node at the given index on success
  *         NULL on failure
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr, *prev, *new;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;
	while (curr)
	{
		if (idx == (i + 1) && curr->next == NULL)
			return (add_dnodeint_end(h, n));
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			prev->next = new;
			new->prev = prev;
			new->next = curr;
			curr->prev = new;
			return (new);
		}
		i++;
		prev = curr;
		curr = curr->next;
	}
	return (NULL);
}
