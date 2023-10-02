#include <stdio.h>

/**
 * main - print its name, followed by a new line.
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
