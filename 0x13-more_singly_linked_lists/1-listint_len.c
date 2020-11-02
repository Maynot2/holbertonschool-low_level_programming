#include "lists.h"

/**
  * listint_len - Computes the length of a listint_t linked list.
  * @h: The head of the linked list.
  *
  * Return: The length of the list as an integer.
  *
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
