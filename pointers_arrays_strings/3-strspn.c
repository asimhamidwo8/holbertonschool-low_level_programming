#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to search
 * @accept: string containing accepted bytes
 * Return: number of bytes from s consisting only of accept chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
		}

		if (found == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
