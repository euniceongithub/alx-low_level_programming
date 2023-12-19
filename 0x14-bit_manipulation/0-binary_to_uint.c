#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: conv_num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num;

	conv_num = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '\0' || *b == '1')
		{
			conv_num = conv_num * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (conv_num);
}

