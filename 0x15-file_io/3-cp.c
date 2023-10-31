#include "main.h"

#define usage "Usage: cp file_from file_to\n"
#define read_err "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define write_err "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define close_err "Error: Can't close fd FD_VALUE %d\n"
#define permission (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH | S_IWGRP)
/**
 * main - main code
 *
 * @c: number
 * @v: pointer
 *
 * Return: 0 or 1
 */

int main(int c, char **v)
{
	char buf[buf_size];
	int f = 0, t = 0;
	ssize_t b;

	if (c != 3)
		dprintf(STDERR_FILENO, usage), exit(97);
	f = open(v[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, read_err, v[1]), exit(98);
	t = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (t == -1)
		dprintf(STDERR_FILENO, write_err, v[2]), exit(99);
	while ((b = read(f, buf, buf_size)) > 0)
		if (write(t, buf, b) != b)
			dprintf(STDERR_FILENO, write_err, v[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, read_err, v[1]), exit(98);
	f = close(f);
	t = close(t);
	if (f)
		dprintf(STDERR_FILENO, close_err, f), exit(100);
	if (t)
		dprintf(STDERR_FILENO, close_err, f), exit(100);
	return (EXIT_SUCCESS);


}
