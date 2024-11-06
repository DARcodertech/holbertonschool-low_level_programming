#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: parameter
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	if (s == NULL || accept == NULL)
	{
	return (NULL);
	}
	while (*s != '\0')
	{
	i = 0;
	while(accept[i] != '\0')
	{
	if (*s == accept[i])
	{
	return (s);
	}
	i++;
	}
	s++;
	}
	if (s == NULL || accept == NULL)
	{
	return (NULL);
	}
return (NULL);
}
