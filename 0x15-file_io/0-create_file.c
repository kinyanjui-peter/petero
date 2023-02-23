#include "main.h"
/**
 *
 * read_textfile -read and print t posix
 *@filename: pointer to file name
 *@letters: letters to br printed
 *
 *Return: number of bytes the file can read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buf;

	if (filename == NULL)
	{
	return(0);
	}
	buf =malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	y = read(x, buf, letters);
	w = write(STDOUT_F:LEND, buf, y)
	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buf);
		return(0);
	}
	free(buf);
	close(o);
	return(0);
}
