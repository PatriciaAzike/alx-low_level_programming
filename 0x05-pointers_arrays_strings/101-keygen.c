#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, i = 0;
	int passwd_len = 2772;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < passwd_len)
	{
		r = rand() % 128;
		if ((i + r) > passwd_len)
			break;
		i += r;
		printf("%c", r);
	}
	printf("%c\n", (passwd_len - i));
	return (0);
}

