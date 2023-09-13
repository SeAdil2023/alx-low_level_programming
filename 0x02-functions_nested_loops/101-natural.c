#include<stdio.h>

/**
 * main - print sum of all multiple of,
 * 3 & 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum;
	int num;

	for (num = 1; num <= 1024; ++num)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
