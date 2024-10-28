#include "main.h"
/**
 * _isupper - check lowercase or uppercase
 * @c: int to insert
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return(1);
	}
	else if (c >= 'a' && c <= 'a')
	{
	return(0);
	}
return(0);
}
