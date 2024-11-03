/**
 * reverse_array - reverse a array
 * @a: array
 * @n: number
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
	t = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = t;
	}
}
