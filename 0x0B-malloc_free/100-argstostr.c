#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates the arguments of the program
 * @ac: argument count
 * @av: variable of type char
 * Return: pointer to new string or null if it fails
 */
char *argstostr(int ac, char **av)
{
	int loc = 0;
	int i = 0, j;
	int av_len;
	int tot_len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		tot_len += strlen(av[i]) + 1;
		i++;
	}
	ptr = (char *) malloc(sizeof(char) * tot_len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		av_len = strlen(av[i]);
		j = 0;
		while (j < av_len)
		{
			ptr[loc++] = av[i][j];
			j++;
		}
		ptr[loc++] = '\n';
		i++;
	}
	ptr[loc] = '\0';
	return (ptr);
}
