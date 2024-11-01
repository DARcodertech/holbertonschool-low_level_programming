/**
 * rev_string - reverse a string
 * @s: parameter for string
 */
void rev_string(char *s)
{
	int length;
	int l;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	for (l = 0; l < length / 2; l++)
	{
	temp = s[l];
	s[l] = s[length - l - 1];
	s[length - l - 1] = temp;
	}

}
