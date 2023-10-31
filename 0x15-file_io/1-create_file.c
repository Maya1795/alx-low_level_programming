#include "main.h"

/**
 * len - length of chara.
 *
 * @c: string
 *
 * Return: len
 *
 */

int len(char *c)
{
	int m = 0;

	if (c == 0)
		return (0);
	while (*c++)
		m++;
	return (m);
}

/**
 * create_file - creat file
 *
 * @filename: name of file
 * @text_content - write text
 *
 * Return: 0 or 1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t b = 0, l = len(text_content);

	if (filename == 0)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (l)
		b = write(i, text_content, l);
	close(i);
	return (b == l ? 1 : -1);
}
