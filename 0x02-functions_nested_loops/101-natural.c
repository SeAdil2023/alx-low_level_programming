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

	for (num = 0; num <= 1024; ++num)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
