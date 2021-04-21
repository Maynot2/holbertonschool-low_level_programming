#include "search_algos.h"
#include <math.h>

size_t list_size(skiplist_t *head)
{
	size_t size = 0;

	if (head)
	{
		while (head)
		{
			head = head->next;
			size++;
		}
	}
	return size;
}

void print_val_checked(size_t idx, int val)
{
	printf("Value checked at index [%lu] = [%d]\n", idx, val);
}

void print_val_found(size_t lo_idx, size_t hi_idx)
{
	printf("Value found between indexes [%lu] and [%lu]\n", lo_idx, hi_idx);
}

/**
 * linear_skip - Searches for a value in linked list using the
 * Linear skip algorithm
 *
 * @list: A pointer to the first node of a single linked list
 * @value: An integer representing the value we are searching for
 *
 * Return: An a pointer to the node with the matching value if found
 *         NULL if the searched value is not present the list
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *search;

	if (!list)
		return (NULL);
	search = list;
	while (list)
	{
		search = list->express;
		if (search)
		{
			if (search->n > value)
			{
				print_val_checked(search->index, search->n);
				print_val_found(list->index, search->index);
				while (list)
				{
					print_val_checked(list->index, list->n);
					if (list->n == value)
						return (list);
					list = list->next;
				}
			}
			else
			{
				list = search;
				print_val_checked(list->index, list->n);
			}
		}
		else
		{
			print_val_found(list->index, list->index + list_size(list) - 1);
			while (list)
			{
				print_val_checked(list->index, list->n);
				if (list->n == value)
					return (list);
				list = list->next;
			}
		}
	}
	return (NULL);
}
