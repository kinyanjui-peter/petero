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
	int **ptr;

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
	while (x < height)
	{
	height = 0;
	while (y < width)
	{
	ptr[y] = (int *)malloc(sizeof(int) * width);
	ptr[x][y];
	y++;
	}
	x++;
	}
	return (ptr);
	free(ptr);
}
