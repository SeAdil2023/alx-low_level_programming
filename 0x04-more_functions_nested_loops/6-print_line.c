#include"main.h"

/**
 * print_line - function that draws a straight line in terminal
 *
 * @n: s the number of times the character _ should be printed
 *
 * Return: Always 0 (succes)
 */

void print_line(int n)
{
	int lnChr;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
