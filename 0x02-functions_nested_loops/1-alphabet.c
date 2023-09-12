#include"main.h"

/**
 * main -  print the alphabet, in lowercase, followed by a new line,using _putchar.
 *
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
