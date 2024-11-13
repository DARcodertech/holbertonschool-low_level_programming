#include <stdlib.h>
/**
 * alloc_grid - returns a pointer
 * @width: parameter
 * @height: parameter
 * Return: g
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i;
        int j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	g[i] = malloc(sizeof(int) * width);
	if (g[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(g[j]);
	}
	free(g);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	g[i][j] = 0;
	}
	}
	return (g);
}
