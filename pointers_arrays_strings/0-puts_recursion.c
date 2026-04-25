#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	write(1, s, 1);
	_puts_recursion(s + 1);
}
