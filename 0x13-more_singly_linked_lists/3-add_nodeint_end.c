#include "lists.h"

/**
  * add_nodeint_end - Insert a new node at the end of a linked list of type
  * stint_t.
  * @head: A pointer to a pointer to the head of the list.
  * @n: The integer value for the new node.
  *
  * Return: A pointer to the newly added node on success.
  *         NULL on failure.
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	current = malloc(sizeof(listint_t));
	if (!current)
	{
		free(new);
		return (NULL);
	}

	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;

	return (new);
}
