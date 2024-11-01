#include "main.h"
/**
 * print_rev - inverse a string 
 * @s: string to insert 
 */
void print_rev(char *s)
{
	int length;
	int i;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	for (i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');

}
