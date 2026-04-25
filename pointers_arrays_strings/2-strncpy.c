#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* نسخ من src حتى n أو نهاية src */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* إذا src أقصر من n نكمل بـ \0 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
