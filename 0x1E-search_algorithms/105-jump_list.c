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
	int jump, i = 0, j;
	listint_t *search;

	if (list && size > 0)
	{
		jump = (int)sqrt(size);
		search = list;
		while (list)
		{
			for (j = 0; j < jump; j++)
			{
				search = search->next;
				if (!search)
					break;
			}
			if ((j < jump) || (search->n > value))
			{
				if (search)
					printf("Value checked at index [%d] = [%d]\n", i + j, search->n);
				printf("Value found between indexes [%d] and [%d]\n", i, i + j);
				while (list)
				{
					printf("Value checked at index [%d] = [%d]\n", i, list->n);
					if (list->n == value)
						return (list);
					list = list->next;
					i++;
				}
			}
			else
			{
				list = search;
				i += jump;
				printf("Value checked at index [%d] = [%d]\n", i, list->n);
			}
		}
	}
	return (NULL);
}
