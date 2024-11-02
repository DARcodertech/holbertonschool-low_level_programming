int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sig = 1;

	if (s[0] == '-')
	{
	sig = -1;
	i++;
	}
	for(; s[i] != '\n'; i++)
	res = res*10 + s[i] - '0';
	

return (sig*res);
}
