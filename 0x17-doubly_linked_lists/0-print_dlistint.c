#include "lists.h"


/**
  * print_dlistint - Prints a double linked list.
  * @h: A pointer to the head of the list.
  *
  * Return: The number of printed nodes.
  */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
