#include "lists.h"

/**
  * free_listint2 - Frees a linked list of type listint_t & sets head to NULL.
  * @head: A pointer to a pointer to the first elment of the list.
  *
  * Return: Nothing
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *prev;

	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		prev = NULL;
	}
}
