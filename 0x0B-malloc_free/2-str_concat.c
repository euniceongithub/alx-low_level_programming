#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);

	 ptr = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
