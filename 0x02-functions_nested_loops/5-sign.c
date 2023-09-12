#include"main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: takes intger type input for function.
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
