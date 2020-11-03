#include "lists.h"

/**
 * distance_from_start - Computes the distance between the start of the list
 * and a given node
 * @h: A pointer to the start of the list.
 * @curr: A pointer to another elment of the list.
 *
 * Return: The distance as an integer.
 *
 */

size_t distance_from_start(const listint_t *h, const listint_t *curr)
{
	size_t c = 0;

	while (h != curr)
	{
		c++;
		h = h->next;
	}

	return (c);
}

/**
 * print_listint_safe - Prints a linked list of type listint_t only once (even
 * if the list is circular).
 * @head: The head of the list.
 *
 * Return: The number of printed elements.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current;

	current = head;
	while (distance_from_start(head, current) == count && current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	if (current)
		printf("-> [%p] %d\n", (void *)current, current->n);

	return (count);
}
