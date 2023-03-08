#include "main.h"
/**
 * _puts_recursion - prints length of a string
 * @s: character
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
