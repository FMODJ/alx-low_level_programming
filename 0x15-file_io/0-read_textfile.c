#include "main.h"

/**
 * read_textfile - function file
 * @filename: name of file used
 * @letters: numbers
 *
 * Return: value returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fds, readers, writer;
	char *buffe;

	if (!filename)
		return (0);
	fds = open(filename, O_RDONLY);
	if (fds < 0)
		return (0);
	buffe = malloc(sizeof(char) * letters);
	if (!buffe)
		return (0);
	readers = read(fds, buffe, letters);
	if (readers < 0)
	{
		free(buffe);
		return (0);
	}
	buffe[readers] = '\0';
	close(fds);
	writer = write(STDOUT_FILENO, buffe, readers);
	if (writer < 0)
	{
		free(buffe);
		return (0);
	}
	free(buffe);
	return (writer);
}
