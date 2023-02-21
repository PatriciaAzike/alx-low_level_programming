#include "main.h"
/* betty style doc for function main goes there */
/**
 * print - prints alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
