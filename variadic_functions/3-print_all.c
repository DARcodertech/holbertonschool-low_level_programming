#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s = "";
	const char *a;

	va_start(args, format);
	s = "";
	a = format;
	while (*a)
	{
	switch (*a)
	{
	case 'c':
	printf("%s%c", s, va_arg(args, int));
	s = ", ";
	break;
	case 'i':
	printf("%s%d", s, va_arg(args, int));
	s = ", ";
	break;
	case 'f':
	printf("%s%f", s, va_arg(args, double));
	s = ", ";
	break;
	case 's':
	{
	char *string = va_arg(args, char *);

	if (string)
	printf("%s%s", s, string);
	else
	printf("%s(nil)", s);
	s = ", ";
	break;
	}
	}
	a++;
	}
	printf("\n");
	va_end(args);
}
