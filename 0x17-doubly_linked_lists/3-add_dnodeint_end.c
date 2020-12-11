#include "lists.h"


/**
  * add_dnodeint_end - Adds a new node at the end of double linked list.
  * @head: A pointer to a pointer to the head node of the list
  * @n: The integer value of the new node
  *
  * Return: The address of the new element on success
  *         NULL on failure
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *curr = NULL;

	if (head == NULL)
		return NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;

		new->prev = curr;
		curr->next = new;
	}
	puts("-------------------------------");
	return (new);
}
