#include "lists.h"


/**
  * add_dnodeint - Adds a new node at the start of double linked list.
  * @head: A pointer to a pointer to the head node of the list
  * @n: The integer value of the new node
  *
  * Return: The address of the new element on success
  *         NULL on failure
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
