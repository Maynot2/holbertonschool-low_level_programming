#include "lists.h"


/**
 * distance_from_beg - Computes the distance between the start of the list
 * and a given node
 * @beg: A pointer to the start of the list.
 * @node: A pointer to another elment of the list.
 *
 * Return: The distance as an integer.
 *
 */

size_t distance_from_beg(listint_t *beg, listint_t *node)
{
	size_t c = 0;

	while (beg != node)
	{
		c++;
		beg = beg->next;
	}

	return (c);
}

/**
 * free_listint_safe - Frees a linked list of type listint_t only once (even
 * if the list loops).
 * @h: Apointer to a pointer to the  head of the list.
 *
 * Return: The number of printed elements.
 *
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *prev, *start;

	start = *h;
	while (distance_from_beg(start, *h) == count && *h)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		count++;
	}
	*h = NULL;

	return (count);
}
