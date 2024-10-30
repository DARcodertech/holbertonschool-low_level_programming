#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int t;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 0; j < size - i; j++)
	{
	_putchar(' ');
	}
	for (t = 0; t < i; t++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
