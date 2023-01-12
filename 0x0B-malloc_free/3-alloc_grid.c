#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - multidimemsional grid
 * @width: width dimemsion
 * @height: height dimension
 * Return: null for failure
 */

int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int ptr;

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
	return (NULL);
	}
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (width < 0 || height < 0)
	{
	return (NULL);
	}
	width = 0;
	while (x < **ptr)
	{
	height = 0;
	while (y < ptr[y])
	{
	ptr[y] = (int *)malloc(sizeof(int) * width);
	/*ptr = ptr[x][y];*/
	}
	}
	return (ptr);
	free(ptr);
}

