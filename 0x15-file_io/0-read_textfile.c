#include "holberton.h"
/**
 * read_textfile - Read text file
 * @filename: filename
 * @letters: letters by numbers
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int z;
	ssize_t T, t;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	z = open(filename, O_RDONLY);
	if (z == -1)
		return (0);
	T = read(z, buf, letters);
	if (T == -1)
		return (0);

	*(buf + T) = '\0';

	t = write(STDOUT_FILENO, buf, T);
	if (t == -1 || t != T)
		return (0);
	close(z);
	return (t);
}