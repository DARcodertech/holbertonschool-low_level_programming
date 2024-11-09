#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * positif - fonctions
 * @str: parameter
 * Return: 0
 */
int positif(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	if (!isdigit(str[i]))
	{
	return (0);
	}
	}
	return (1);
}
/**
 * main - the entry point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	if (!positif(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return(0);
}
