#include <stdio.h>
/**
 * print_array - print a array
 * @a: array
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i > 0)
	{
	printf(", ");
	printf("%d", a[i]);
	}
	else
	{
	printf("%d", a[i]);
	}
	}
	printf("\n");
}
