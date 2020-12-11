#include "lists.h"


/**
  * sum_dlistint - Compute the sum of n data component of each node.
  * @head: A pointer to the head node of the list.
  *
  * Return: Sum of data component of each node
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
