/**
 * _strcpy - copies a string
 * @dest: copy a string
 * @src: string for copy
 * Return: return a dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
