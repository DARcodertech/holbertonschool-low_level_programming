#include "main.h"
/**
 * set_bit - function
 * @n: parameter
 * @index: parameter
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

mask = 1UL << index;
if (index >= (sizeof(unsigned long int)* 8))
{
return (1);
}
*n = *n | mask;
return (1);
}
