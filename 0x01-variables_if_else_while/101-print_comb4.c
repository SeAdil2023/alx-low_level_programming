#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n, m, l;

	for (n = 10; n < 20; n++)
	{
		for (m = 11; m < 20; m++)
		{
			for (l = 12; l < 20; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 16 || m != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
