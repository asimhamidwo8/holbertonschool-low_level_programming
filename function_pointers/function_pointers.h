#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/**
 * print_name - prints a name using function pointer
 * @name: name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *));

#endif
