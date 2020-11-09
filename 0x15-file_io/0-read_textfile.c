#include "holberton.h"

/**
  * read_textfile - Reads a text file and prints it to standard output.
  * @filename: The file name
  * @letters: The number of letters to be read.
  *
  * Return: The maximum number of characters that could have beeen read.
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buff;
	int readd, wrote;

	if (fd < 0)
		return (0);

	buff = malloc((sizeof(char) + 1) * letters);
	if (!buff)
		return (0);
	buff[letters] = '\0';

	readd = read(fd, buff, letters);
	if (readd <= 0)
		return (0);
	wrote = write(STDOUT_FILENO, buff, readd);
	if (wrote != readd)
		return (0);

	close(fd);
	free(buff);
	return (readd);
}
