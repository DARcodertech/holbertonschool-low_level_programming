#include "main.h"
/**
 * times_table - table of numbers
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
	if (j > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (j != 0 && result < 10)
	{
	_putchar(' ');
	}
	if (result >= 10)
	{
	_putchar('0' + (result / 10));
	}
	_putchar('0' + (result % 10));
	}
	_putchar('\n');
	}
}
