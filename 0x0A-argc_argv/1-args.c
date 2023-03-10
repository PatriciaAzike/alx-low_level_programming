#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: integer
 * @argv: character that holds the argument
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
