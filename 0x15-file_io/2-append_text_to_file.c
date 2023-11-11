#include "main.h"

/**
 * append_text_to_file - function used
 * @filename: file used here
 * @text_content: text inputed
 *
 * Return: int returned in here
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fd, text_content, j);
		if (i != j)
			return (-1);
	}

	close(fd);

	return (1);
}
