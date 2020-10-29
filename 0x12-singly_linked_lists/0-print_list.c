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
 * print_node - Fomat the node content and prints it to sdtout
 * @s: The content to be formated and printed
 *
 * Return: Nothing
 *
 */

void print_node(char *s)
{
	if (s)
		printf("[%d] %s\n", _strlen(s), s);
	else
		printf("[%d] %s\n", 0, "(nil)");
}

/**
 * print_list - Prints a linked list given the first element of the list h.
 * @h: A pointer to the first element of the list.
 *
 * Return: The list length as a size_t.
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *node;

	if (h)
	{
		count++;
		print_node(h->str);
		if (!(h->next))
			return (count);
		node = h->next;

		while (node)
		{
			print_node(node->str);
			node = node->next;
			count++;
		}
	}

	return (count);
}
