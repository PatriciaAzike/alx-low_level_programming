#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - function that selects the correct function to operate on
 * @s: operator passed as argument to the program
 * Return: pointer to the function operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
