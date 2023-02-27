#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define len_of_passwd 20
/**
 * main - generate passwords 
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	time_t t;
	char passwd[len_of_passwd + 1];

	srand((unsigned int) time(&t));
	
	while (i < len_of_passwd)
	{
		passwd[i] = rand() % 128;
		i++;
	}
	passwd[len_of_passwd] = '\0';
	printf("%s\n", passwd);
	return (0);
}
