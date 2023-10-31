#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to two dimensionalarray of integers
 *
 * @width: int
 *
 * @height: int
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;
	int len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}
	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = (int *)malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < height; j++)
			tab[i][j] = 0;
	return (tab);
}
