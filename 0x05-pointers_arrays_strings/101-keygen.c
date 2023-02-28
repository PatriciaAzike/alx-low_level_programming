#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate passwords 
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	const int passwd_len = 2772;
	
	srand(time(NULL));
	while (i < passwd_len)
	{
		int r = rand() % 94;
		if ((i + r) > passwd_len)
		{
			r = passwd_len - i;
		}
		i += r;
		printf("%c", '!' + r);
	}
	printf("\n");
	return (0);
}
