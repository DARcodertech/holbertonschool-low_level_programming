#include <stdlib.h>
/**
 * _calloc - function that allocates memory
 * @nmemb: parameter
 * @size: parameter
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	t = nmemb * size;
	p = (char *)malloc(t);

	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < t; i++)
	{
	p[i] = 0;
	}
	return (p);
}
