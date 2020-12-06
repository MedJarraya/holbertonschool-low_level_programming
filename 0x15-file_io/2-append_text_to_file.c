#include "holberton.h"
/**
* append_text_to_file - function that appends a text at the end of a file.
* @filename: name of the file
* @text_content: the content that will be written inside the file.
* Return: either 1 on success or -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int a, rw, len = 0;

	if (filename == NULL)
	return (-1);

a = open(filename, O_WRONLY | O_APPEND);
	if (a < 0)
	return (-1);
		if (text_content != NULL)
		{
		while (text_content[len])
		len++;
			rw = write(a, text_content, len);
			if (rw < 0)
			return (-1);
		}

close(a);
return (1);
}
