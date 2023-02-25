#include "main.h"
/**
 * create_buffer - creates buffre
 *@size: filenme
 *Return: 1
 */

char *create_buffer(size_t size);
void close_file(int fd);

char *create_buffer(size_t size)
{
char *buf = malloc(size);

if (buf == NULL)
	{
	dprintf(STDERR_FILENO, "Error: can't allocate memory\n");
	exit(99);
	}
	return (buf);
}
/**
 * close_file - close buffer
 *@fd: file descriptor
 *
 *Return: 0
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close the file descriptor\n");
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 *@argc: count
 *@argv: array vector
 *Return: final file
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, nread, nwritten;
	char *buf;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
	exit(97);
	}

	buf = create_buffer(BUFSIZ);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't open %s for reading\n", argv[1]);
	free(buf);
	exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't open %s for writing\n", argv[2]);
	free(buf);
	close_file(fd_from);
	exit(99);
	}

	while ((nread = read(fd_from, buf, 1024)) > 0)
	{
	nwritten = write(fd_to, buf, nread);
	if (nwritten == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		free(buf);
		close_file(fd_from);
		close_file(fd_to);
	exit(99);
	}
	}

if (nread == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
	free(buf);
	close_file(fd_from);
	close_file(fd_to);
	exit(98);
	}

	free(buf);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
