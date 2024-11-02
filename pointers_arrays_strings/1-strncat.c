/**
 * _strncat - concatenates string 
 * @dest: parameter 
 * @src: parameter
 * @n: parameter
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
	ptr++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';

	return (dest);
}
