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

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	char *str_cp;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	str_cp = strdup(str);
	new_head->str = str_cp;
	new_head->len = _strlen(str_cp);
	new_head->next = *head ? *head : NULL;
	*head = new_head;

	return (*head);
}
