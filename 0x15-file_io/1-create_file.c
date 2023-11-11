#include "main.h"

/**
 * create_file - function used
 * @filename: file used
 * @text_content: text used
 *
 * Return: int returned
 */
int create_file(const char *filename, char *text_content)
{
	int fds, a, b = 0;

	if (!filename)
		return (-1);

	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fds < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fds, text_content, b);
		if (a != b)
			return (-1);
	}

	close(fds);

	return (1);
}
