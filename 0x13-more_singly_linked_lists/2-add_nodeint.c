#include "lists.h"

/**
  * add_nodeint - Insert new node at the start of a linked list of type
  * stint_t.
  * @head: A pointer to a pointer to the head of the list.
  * @n: The integer value for the new node.
  *
  * Return: A pointer to the newly added node on success.
  *         NULL on failure.
  *
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head ? *head : NULL;
	*head = new;

	return (new);
}
