/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i;
	unsigned int j;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
	n = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	n = 1;
	}
	}
	if (n == 0)
	{
	return (count);
	}
	count++;
	}
return (count);
}
