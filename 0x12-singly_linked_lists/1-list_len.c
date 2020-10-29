#include "lists.h"

/**
 * list_len - Compute the length of a linked list.
 * @h: A pointer to the first element of the list.
 *
 * Return: The list length as a size_t.
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *node;

	if (h)
	{
		count++;
		if (!(h->next))
			return (count);
		node = h->next;

		while (node)
		{
			node = node->next;
			count++;
		}
	}

	return (count);
}
