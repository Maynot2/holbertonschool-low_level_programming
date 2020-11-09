#include "holberton.h"

/**
 * _strlen - Computes the size of a string s.
 * @s: A pointer to a string.
 *
 * Return: A integer.
 *
 */

int _strlen(const char *s)
{
	unsigned int c = 0;

	if (s == NULL)
		return (c);

	while (*(s + c))
		c++;
	return (c);
}

/**
 * append_text_to_file - Append text to an existing file.
 * @filename: The file name.
 * @text_content: The content for the file.
 *
 * Return: 1 on success.
 *        -1 on error.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wrote;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		wrote = write(fd, text_content, _strlen(text_content));
		if (wrote < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
