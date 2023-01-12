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
	int x;
	int y;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[y] = (int *)malloc(sizeof(int) * width);
			if (ptr[y] == NULL)
			{
			for (y = 0; y < width; y++)
			free(ptr[y]);
			free(ptr);
			return (NULL);
			}
		}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	{
	ptr[x][y] = 0;
	}
	}
	return (ptr);
}

