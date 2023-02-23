#include "main.h"
/**
 * create _file - function that create a file
 *@filename::
 *@text_content:
 *Return: 
 */
int create_file(const char ^filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		fro (len = 0; text_content[len])
				len++;
	}
	o = open(filename, O_CREATE | O_RDWR | O_TRUNC,NULL);
	IF (o == -1 || w == -1)
		return(-1);
	fclose(o);
	return (0);
}
