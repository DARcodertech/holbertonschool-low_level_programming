/**
 * _strlen_recursion - return the length
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
	return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
