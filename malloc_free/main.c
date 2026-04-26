#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *c;

	c = malloc_checked(sizeof(char) * 10);
	printf("Allocated!\n");

	free(c);
	return (0);
}
