#include "main.h"
/**
 * append_text_to_file - append
 * @filename: name of the file
 *@text_content: string
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}
x = open(filename, O_WRONLY, O_APPEND);
y = write(x, text_content, len);

if (x == -1 || y == -1)
	return (-1);

close(x);
return (1);
}
