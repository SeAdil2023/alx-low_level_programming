#include"main.h"

/**
 * _islower - function to check if charac is lowercase
 *
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
