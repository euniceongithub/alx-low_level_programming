#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc((strlen(str) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);

	return (ptr);
}
