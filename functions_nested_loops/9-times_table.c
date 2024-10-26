#include "main.h"
/**
 * times_tables - table of numbers 
 */
void times_table(void)
{
	int i;
	int j;
	int result;
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	result = i * j;
	if (result < 10)
	{
	_putchar(' ');
	_putchar(result + '0');
	}
	else
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	if (j < 9 && j > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
