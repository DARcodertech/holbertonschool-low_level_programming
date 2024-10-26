#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print a last digit number
 * @n: parameter of function
 * Return: print last digit
 */
int print_last_digit(int n)
{
	int print_last_digit = abs(n % 10);
	_putchar(print_last_digit + '0');

	return (print_last_digit);
}
