#include "lists.h"

/**
  * free_listint - Frees a linked list of type listint_t.
  * @head: A pointer to the first elment of the list.
  *
  * Return: Nothing
  *
  */

void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
