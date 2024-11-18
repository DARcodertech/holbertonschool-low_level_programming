#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print a name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
	return;
	}
	if (name && f)
	{
	f(name);
	}
}
