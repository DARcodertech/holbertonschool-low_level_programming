#include "main.h"
/**
 * binary_to_uint - function
 * @b: function
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result << 1;
if (b[i] == '1')
{
result = result | 1;
}
}
return (result);
}
