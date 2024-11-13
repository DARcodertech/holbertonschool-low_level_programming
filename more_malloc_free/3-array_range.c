#include <stdlib.h>
/**
 * array_range - function
 * @min: parameter
 * @max: parameter
 * Return: p
 */
int *array_range(int min, int max)
{
	int *p;
	int size;
	int i;

	if (min > max)
	{
	return (NULL);
	}
	size = max - min + 1;
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	p[i] = min + i;
	}
	return (p);
}
