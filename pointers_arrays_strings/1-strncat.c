#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* نصل لنهاية dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* ننسخ من src حتى n أو نهاية src */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* null terminator */
	dest[i] = '\0';

	return (dest);
}
