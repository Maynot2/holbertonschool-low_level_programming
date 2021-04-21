#include "search_algos.h"
#include <math.h>

/**
 * list_size - Computes the size of a given list
 *
 * @head: A pointer to the start of the list
 *
 * Return: The size of the list as a size_t
 *         0 if the list is NULL or empty
 */

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
	return (size);
}

/**
 * print_val_checked - Print the given interval containing the found node
 *
 * @idx: A size_t to representing an index
 * @val: An integer representing the value at the matching index
 *
 * Return: Nothing
 */

void print_val_checked(size_t idx, int val)
{
	printf("Value checked at index [%lu] = [%d]\n", idx, val);
}

/**
 * print_val_found - Print the given interval containing the found node
 *
 * @lo_idx: A size_t to representing the start index
 * @hi_idx: A size_t representing the end index
 *
 * Return: Nothing
 */

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
			if (search->n >= value)
			{
				print_val_checked(search->index, search->n);
				print_val_found(list->index, search->index);
				for (; list; list = list->next)
				{
					print_val_checked(list->index, list->n);
					if (list->n == value)
						return (list);
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
			for (; list; list = list->next)
			{
				print_val_checked(list->index, list->n);
				if (list->n == value)
					return (list);
			}
		}
	}
	return (NULL);
}
