#include "lists.h"

/**
 * print_node - Fomat the node content and prints it to sdtout
 * @s: The content to be formated and printed
 * @length: The length of the string as an unsigned integer.
 *
 * Return: Nothing
 *
 */

void print_node(char *s, unsigned int length)
{
	if (s)
		printf("[%d] %s\n", length, s);
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

	while (h)
	{
		print_node(h->str, h->len);
		h = h->next;
		count++;
	}

	return (count);
}
