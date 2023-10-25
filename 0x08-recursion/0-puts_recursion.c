#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s == '/0')
	{
		return ("\n");
	}
	else
		return (_puts_recursion(++s));
}
