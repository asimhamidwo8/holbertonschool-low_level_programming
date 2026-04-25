#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		/* إذا حرف صغير ونحتاج نحوله */
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		/* تحديد الفواصل */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}

		i++;
	}

	return (str);
}
