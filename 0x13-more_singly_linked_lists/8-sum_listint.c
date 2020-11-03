#include "lists.h"

/**
  * sum_listint - Sums the value n of all elements in a linked list of type
  * listint_t.
  * @head: A pointer to the  head of the linked list.
  *
  * Return: The sum of the values n of each elements.
  *         0 if empty.
  *
  */

int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
