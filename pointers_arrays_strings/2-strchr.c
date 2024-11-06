/**
 * _strchr - locates a character
 * @s: string 
 * @c: parameter
 * Return: 0 
 */
#include <stddef.h>
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
return (NULL);
}
