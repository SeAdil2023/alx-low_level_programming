#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *ptr = s;
	char c, base;

	while (*ptr)
	{
		c = *ptr;
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			*ptr = (c - base + 13) % 26 + base;
		}
		ptr++;
	}

	return (s);
}
