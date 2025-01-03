#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = atoi(argv[1]);
	operation = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
