#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*op_)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_ = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (op_ == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_(num1, num2));

	return (0);
}
