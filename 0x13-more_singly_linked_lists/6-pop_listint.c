#include "lists.h"

/**
  * pop_listint - Remove first element of a linked list of type listint_t.
  * @head: A pointer to a pointer to the head of the list.
  *
  * Return: Returns the head node’s data (n) on success.
  *         0 on failure.
  *
  */

int pop_listint(listint_t **head)
{
	listint_t *new_head, *old_head;
	int num;

	if (!*head)
		return (0);

	num = (*head)->n;
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		old_head = *head;
		new_head = (*head)->next;
		*head = new_head;
		free(old_head);
	}

	return (num);
}
