#include "lists.h"


/**
  * free_dlistint - Frees a double linked list.
  * @head: A pointer to a pointer to the head node of the list
  *
  * Return: Nothing
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = NULL;

	if (head)
	{
		while (head)
		{
			prev = head;
			head = head->next;
			free(prev);
			prev = NULL;
		}
	}
}
