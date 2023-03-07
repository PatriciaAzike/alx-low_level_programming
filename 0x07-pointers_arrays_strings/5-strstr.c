#include "main.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystk: first character
 * @nedl: second character
 * Return: pointer to the beginning of the located substring
 */
 char *_strstr(char *haystk, char *nedl)
{
	int i, j;

	for (i = 0; haystk[i] != '\0'; i++)
	{
		for (j = 0; nedl[j] != '\0' && haystk[i+j] == nedl[j]; j++)
			;
		if (nedl[j] == '\0')
			{
				return (haystk + i);
			}
	}
	return (NULL);
}
