#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
       	char *str = s;
 	char c;

 	while (*s)
  	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		{
			c = *s + 13;
		}
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
		{
			c = *s - 13;
		}
		else
		{
			c = *s;
		}
		*s++ = c;
	}
	return (str);
}
