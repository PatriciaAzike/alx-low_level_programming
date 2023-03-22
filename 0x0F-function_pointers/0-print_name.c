#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - a function that prints name
*@name: pointer variable of type char
*@f: pointer to function that prints name
*Return: no return (void)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
