#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: integer
 * @argv: character that holds the name
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
