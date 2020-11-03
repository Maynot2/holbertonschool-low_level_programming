#include "lists.h"

/**
 * find_listint_loop - Find the node at which a loop start if there is one.
 * @head: Apointer to the start of the list.
 *
 * Return: The address of the node where the loop starts.
 *         NULL if there is no loop.
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;
	while (hare)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (hare == tortoise)
		{
			hare = head;
			while (hare != tortoise)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
