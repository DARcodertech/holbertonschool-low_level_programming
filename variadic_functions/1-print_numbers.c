#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints some numbers
 * @separator: parameter
 * @n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
