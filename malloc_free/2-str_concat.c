#include <stdlib.h>
/**
 * str_concat - concenates
 * @s1: parameter
 * @s2: parameter
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int l = 0;
	unsigned int n = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[l])
	{
	l++;
	}
	while (s2[n])
	{
	n++;
	}
	result = malloc(sizeof(char) * (l + n + 1));
	if (result == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < l; i++)
	{
	result[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
	result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
