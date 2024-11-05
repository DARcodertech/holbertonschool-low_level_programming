/**
 * _memset - fills a memory with a constant byte
 * @s: string or array
 * @b: char
 * @n: number
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
