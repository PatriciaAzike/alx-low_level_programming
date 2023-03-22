#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first integer
 * @b: second integer
 * Return: quotientt
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos operator
 * @a: first integer
 * @b: second integer
 * Return: modulus/remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
