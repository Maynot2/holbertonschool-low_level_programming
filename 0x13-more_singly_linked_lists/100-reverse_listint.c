#include "lists.h"

/**
  * reverse_listint - Reverses a linked linst of type listint_t.
  * @head: A pointer to a pointer the  head of the linked list.
  *
  * Return: A pointer to the  start of the reversed list.
  *         NULL on failure.
  *
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	prev = NULL;
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;

	return (*head);
}
