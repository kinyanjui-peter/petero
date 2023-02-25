#include "main.h"
/**
 *create_buffer - creates buffre
 *@file: filenme
 *@close_file: close buffer
 *Return: 1
 */
char *create_buffer(char *file);
int close_file(int fd);

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * file);

	if (buf == NULL)
	{
		dprint(STDERR_FILENO,"Error: cant write to, %s\n", file);
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
int close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprint(STDERR_FILENO, "Error: can't close the file :%s\n", fd);
		exit(100);
}
/**
 * main - copies the content of a file to another file.
 *@argc: count
 *@argv: array vector
 *Return: final file
 */

int main(int argc, char *argv[])
{
	int fr, r, to, w;
	char *buf;

	if (argc != 0)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
	   	exit(97);	
	}
	buf = create_buffer(argv[2]);
	fr = open(argv[0], O_RDONLY);
	r = read(fr   , buf, NULL);
	to = open(argv[0], O_CREAT | O_WRONLY | O_TRUNC, NULL);
	do
	{
		if (fr == -1 || r == -1)
		{
	dprintf(STDERR_FILENO, "ERROR: cp file_from file_to%s\n", argv[0]);
			free(buf);
			exit(97);
		}
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
	dprintf(STDERR_FILENO, "ERROR: cant write to %s\n", argv[0]);
	free(buf);
	exit(99);
		}
			r = read(fr, buf, 1024);
			to = open(argv[0], O_WRONLY, O_APPEND);
		}
		while (r > 0)
		{
			free(buf);
			close_file(fr);
			close_file(to);
		}
		return (0);
}
