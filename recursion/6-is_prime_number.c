/**
 * is_prime_again - function
 * @n: parameter
 * @d: parameter
 * Return: 0 or 1 n
 */
int is_prime_again(int n, int d)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n == 2)
	{
	return (1);
	}
	if (n % d == 0)
	{
	return (0);
	}
	if (d * d > n)
	{
	return (1);
	}

	return (is_prime_again(n, d + 1));
}

/**
 * is_prime_number - function
 * @n: parameter
 * Return: function
 */
int is_prime_number(int n)
{
	return (is_prime_again(n, 2));
}
