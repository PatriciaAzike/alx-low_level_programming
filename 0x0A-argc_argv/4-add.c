#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: character that holds the name
 * Return: return 0 or 1
*/
int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (-1);
			}
			if (!argv[i][j+1])
			{
				sum += atoi(argv[i]);
				i++;
				j = 0;
			}
			else
			{
				j++;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
