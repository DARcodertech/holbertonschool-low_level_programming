/**
 * swap_int - swap a number
 * @a: first number to swap
 * @b: second number to swap
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
