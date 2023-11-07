#include <stdio.h>
/**
 * main - prints out name of file it was compiled from
 *
 * Return: A lways 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
