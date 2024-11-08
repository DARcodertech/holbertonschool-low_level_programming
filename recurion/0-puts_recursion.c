void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	else
	{
	_puts_recursion(s + 1)
	}
}
