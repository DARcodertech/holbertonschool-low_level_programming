#include <stdlib.h>
/**
 * malloc_checked - function that allocates
 * @b: paramaeer
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
