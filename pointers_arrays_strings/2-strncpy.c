/**
 * _strncpy - copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (*src != '\0')
	{
	dest[i] = *src;
	src++;
	}
	else
	{
	dest[i] = '\0';
	}
	}
return (dest);
}
