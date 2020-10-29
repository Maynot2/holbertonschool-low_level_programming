#include "lists.h"

/**
 * _strlen - Computes the size of a string s.
 * @s: A pointer to a string.
 *
 * Return: A integer.
 *
 */

int _strlen(char *s)
{
	int c = 0;

	if (s == NULL)
		return (c);

	while (*(s + c))
		c++;
	return (c);
}

/**
 * add_node - Adds a node at the start of a linked list.
 * @head: A pointer to a pointer to the first element of the list.
 * @str: A string.
 *
 * Return: The address of the new element on success.
 *         NULL on failure.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *curr_node;
	char *str_cp;

	new_tail = malloc(sizeof(list_t));
	if (!new_tail)
		return (NULL);

	str_cp = strdup(str);
	new_tail->str = str_cp;
	new_tail->len = _strlen(str_cp);
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (*head);
	}

	curr_node = *head;
	while(curr_node->next)
			curr_node = curr_node->next;

	curr_node->next = new_tail;

	return (new_tail);
}
