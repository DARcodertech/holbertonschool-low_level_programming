#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: number
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int l = 0;
	unsigned int v = 0;
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
	while (s2[v])
	{
	v++;
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
