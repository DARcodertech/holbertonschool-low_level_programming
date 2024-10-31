/**
 * _strlen - count length of a string
 * @s: string to insert
 * Return: string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
	length++;
	s++;
	}

return (length);
}
