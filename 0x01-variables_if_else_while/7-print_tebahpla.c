#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int alph;
        for (alph = 'z'; alph >= 'a'; alph--)
        {
                putchar(alph);
        }
        putchar('\n');
        return (0);
}
