#include "main.h"
/**
 * flip_bits - function
 * @n: parameter
 * @m: parameter
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;

while (xor)
{
count += xor & 1;
xor = xor >> 1;
}

while (xor)
{
xor = xor & (xor - 1);
count++;
}
return (count);
}
