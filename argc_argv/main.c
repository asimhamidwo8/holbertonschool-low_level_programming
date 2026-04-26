#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;
	unsigned int i;

	buffer = create_array(10, 'H');

	if (buffer == NULL)
	{
		printf("failed\n");
		return (1);
	}

	for (i = 0; i < 10; i++)
		printf("%c", buffer[i]);

	printf("\n");

	free(buffer);

	return (0);
}
