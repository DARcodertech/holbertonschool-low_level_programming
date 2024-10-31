/**
 * _strlen - count length of a string
 * @s: string to insert
 * Return: string
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
	s++;
	length++;
	}

return (length);
}
