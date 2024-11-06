#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix 
 * @a: parameter
 * @size: parameter
 */
void print_diagsums(int *a, int size)
{
	int i;
	int n = 0;
	int l = 0;

	for (i = 0; i  < size; i++)
	{
	n += a[i * size + i];
	l += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", n, l);
}
