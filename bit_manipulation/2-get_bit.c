#include "main.h"
/**
 * get_bit - function
 * @n: parameter
 * @index: parameter
 * Return: n
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit;

bit = sizeof(unsigned long int) * 8;
if (index >= bit)
{
return (-1);
}
return ((n >> index) & 1);
}
