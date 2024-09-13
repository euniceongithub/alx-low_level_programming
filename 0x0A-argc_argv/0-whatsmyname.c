#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
