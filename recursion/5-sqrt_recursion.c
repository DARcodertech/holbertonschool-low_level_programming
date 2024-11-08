/**
 * _sqrt_recursion - returns the natural square
 * @n: number
 * Return:
 */
int _sqrt_again(int n, int l);

int _sqrt_recursion(int n)
{
	return _sqrt_again (n, 1);
}
/** 
 * _sqrt_again - returns the natural square
 * @n: number
 * Return: function
 */
int _sqrt_again(int n, int l)
{
	if (l * l == n)
	{
	return (l);
	}
	if (l * l > n)
	{
	return (-1);
	}
	return (_sqrt_again(n, l + 1));
}
