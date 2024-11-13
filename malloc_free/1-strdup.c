#include <stdlib.h>
/**
 * _strdup - function that returns pointer
 * @str: string
 * Return: d
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int l = 0;
	char *d;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[l])
	{
	l++;
	}
	d = malloc(sizeof(char) * (l + 1));
	if (d == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
	d[i] = str[i];
	}
	return (d);
}
