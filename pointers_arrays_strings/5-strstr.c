#include <stddef.h>
/**
 * _strstr -  locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
	{
	return (haystack);
	}
	while (*haystack != '\0')
	{
	if (*haystack == *needle)
	{
	while (needle[i] != '\0' && haystack[i] == needle[i])
	{
	i++;
	}
	if (needle[i] == '\0')
	{
	return (haystack);
	}
	}
	haystack++;
	}
return (NULL);
}
