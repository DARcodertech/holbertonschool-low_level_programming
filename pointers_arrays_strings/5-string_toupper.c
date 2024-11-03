/**
 * string_toupper - change lowercase to uppercase
 * @string: string to change
 * Return: string
 */
char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
	if (string[i] >= 'a' && string[i] <= 'z')
	{
	string[i] = string[i] - 32;
	}
	i++;
	}
	return (string); 
}
