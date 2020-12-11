#include "lists.h"


/**
  * delete_dnodeint_at_index - Deletes node at given index.
  * @head: A pointer to a pointer to the head node of the list.
  * @index: The given index.
  *
  * Return: 1 on success.
  *        -1 on failure.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = NULL, *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
			tmp->next = NULL;
			free(tmp);
			tmp = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	curr = *head;
	for (i = 0; curr != NULL; i++)
	{
		if (index == i)
		{
			curr->next->prev = tmp;
			tmp->next = curr->next;
			curr->next = NULL;
			curr->prev = NULL;
			free(curr);
			curr = NULL;
			return (1);
		}
		tmp = curr;
		curr = curr->next;
	}
	return (-1);
}
