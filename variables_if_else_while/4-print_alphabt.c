#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'q' && a != 'e')
	{
	putchar(a);
	}
	}
	putchar('\n');
return (0);
}
