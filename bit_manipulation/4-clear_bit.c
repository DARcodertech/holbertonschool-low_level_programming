#include "main.h"
/**
 * clear_bit - function
 * @n: parameter
 * @index: parameter
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

mask = 1UL << index;
mask = ~mask;
*n = *n & mask;
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
return (1);
}
