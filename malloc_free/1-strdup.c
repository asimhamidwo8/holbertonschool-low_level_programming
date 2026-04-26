#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new duplicated string
 * @str: string to duplicate
 * Return: pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';

	return (dup);
}
