#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function prints strings
 * @separator: parameter
 * @n: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	s = va_arg(args, char *);
	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", s);
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
