#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in an array of integers using the
 * Jump search algorithm
 *
 * @list: A pointer to the first node of a single linked list
 * @size: A integer representing the size of the list
 * @value: An integer representing the value we are searching for
 *
 * Return: An a pointer to the node with the matching value if found
 *         NULL if the searched value is not present the list
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list)
	{
		while (list)
		{
			if (list->n == value)
				return (list);
			list->next;
		}
	}
	return (NULL);
}
