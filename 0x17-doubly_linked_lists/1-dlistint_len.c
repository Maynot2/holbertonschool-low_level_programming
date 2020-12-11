#include "lists.h"


/**
  * dlistint_len - Computes the length of a double linked list.
  * @h: A pointer to the head of the list.
  *
  * Return: The number of elements in the linked list.
  */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
