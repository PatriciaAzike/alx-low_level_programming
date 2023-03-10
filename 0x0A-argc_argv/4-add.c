#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers.
 *@argc: argument count
 *@argv: array that contains the command line arguments.
*Return: 0 
*/

int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	while ( i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
