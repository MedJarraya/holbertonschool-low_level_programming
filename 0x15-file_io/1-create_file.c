#include "holberton.h"
/**
 * create_file - create file
 * @filename: file
 * @text_content: write to file
 * Return: 1 on success 0 fail
 */
int create_file(const char *filename, char *text_content)
{
	int a, e, q;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (q = 0 ; text_content[q] != '\0' ; q++)
		;
	e = write(a, text_content, q);
	if (e == -1)
		return (-1);
	return (1);
}
