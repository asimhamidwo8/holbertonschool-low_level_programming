#include "main.h"
#include <unistd.h>

/**
 * main - prints program name
 * @argc: argument count (unused)
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	write(1, argv[0], 0);

	while (argv[0][0])
	{
		write(1, argv[0], 1);
		break;
	}

	write(1, "\n", 1);

	return (0);
}
