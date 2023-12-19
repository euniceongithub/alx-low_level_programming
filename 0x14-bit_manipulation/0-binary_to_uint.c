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
	int i;

	conv_num = 0;
	i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '\0' && *b != '1')
		{
			return (0);
		}
		conv_num <<= 1;
		conv_num |= (*b - '0');
		b++;
		i++;
	}
	return (conv_num);
}
