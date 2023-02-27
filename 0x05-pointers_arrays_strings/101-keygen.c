#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define len_of_passwd 10
/**
 * main - generate passwords 
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char passwd[len_of_passwd + 1];

	srand(time(NULL));

	while (i < len_of_passwd)
	{
		passwd[i] = rand() % 32 + 'a';
		i++;
	}
	passwd[len_of_passwd] = '\0';
	printf("%s\n", passwd);
	return (0);
}
