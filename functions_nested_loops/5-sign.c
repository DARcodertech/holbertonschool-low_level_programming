#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: parameter of number
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

return (0);
}
