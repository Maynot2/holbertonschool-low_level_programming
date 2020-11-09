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
 * create_file - Creates a file.
 * @filename: The file name
 * @text_content: The content for the file.
 *
 * Return: 1 on success.
 *        -1 on error.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wrote;

	fd = open(filename, O_TRUNC | O_WRONLY);
	if (fd < 0)
		fd = open(filename, O_CREAT | O_WRONLY, S_IWUSR + S_IRUSR);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		wrote = write(fd, text_content, _strlen(text_content));
		if (wrote < 0)
			return (-1);
	}

	close(fd);
	return (0);
}
