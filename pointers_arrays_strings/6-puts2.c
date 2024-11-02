#include "main.h"
/**
 * puts2 - print other character
 * @str: parameter
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	length++;
	i++;
	}
	_putchar('\n');
}
