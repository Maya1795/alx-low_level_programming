#include "main.h"

/**
 * read_textfile - read file
 *
 * @filename: file name
 * @letters: string
 *
 * Return:number of letters
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[buf_size * 8];
	ssize_t b;
	int f;

	if (filename == NULL || letters == 0)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = read(f, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(f);
	return (b);
}
