#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: memory address
 * @size: size of memory
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
			printf(" ");
		if (i % 10 == 0 && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);

	_memset(buffer, 0x01, 95);

	printf("-------------------------------------------------\n");

	simple_print_buffer(buffer, 98);

	return (0);
}
