#include"main.h"

/**
 * print_alphabet - print the alphabet, followed by a new line,using _putchar.
 * return
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
