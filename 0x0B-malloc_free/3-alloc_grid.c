#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
* Return: pointer of an array of integers
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int a[height][width];

	if (width == 0 || height == 0)
		return (NULL);

	p = a;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (p);
}
