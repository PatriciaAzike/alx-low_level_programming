#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store output
 * @size_r: buffer size:
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int res, curr1, curr2, res_index = size_r - 1;
	
	while (*(n1 + len1) != '\0')
	{
		len1++;
	}
	while (*(n2 + len2) != '\0')
	{
		len2++;
	}
	if (len1 >= len2)
	{
		res_index = len1;
	}
	else
	{
		res_index = len2;
	}
	if (size_r <= res_index + 1)
		return (0);
	r[res_index + 1] = '\0';
	len1--, len2--, size_r--;
	curr1 = *(n1 + len1) - 48;
	curr2 = *(n2 + len2) - 48;
	while (res_index >= 0)
	{
		res = curr1 + curr2 + carry;
		if (res >= 10)
			carry = res / 10;
		else
			carry = 0;
		if (res > 0)
			*(r + res_index) = (res % 10) + 48;
		else
			*(r + res_index) = '0';
		if (len1 > 0)
			len1--, curr1 = *(n1 + len1) - 48;
		else
			curr1 = 0;
		if (len2 > 0)
			len2--, curr2 = *(n2 + len2) - 48;
		else
			curr2 = 0;
		res_index--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
