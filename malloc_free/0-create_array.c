#include <stdlib.h>
/**
 * create_array - function that make an array
 * @size: size of array
 * @c: char
 * Return: m
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *m;

	if (size == 0)
	{
	return (NULL);
	}
	m = malloc(size * sizeof(char));
	if (m == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	m[i] = c;
	}
	return (m);
}
