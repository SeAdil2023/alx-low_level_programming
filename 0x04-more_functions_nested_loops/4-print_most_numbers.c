#include"main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9,
 * followed by a new line
 * do not print 2 and 4
 * use _putchar twice in your code
 *
 * Return: Always 0 (succes)
 */

void print_most_numbers(void);
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 0 || num == 4)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
