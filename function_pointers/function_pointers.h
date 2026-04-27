#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * int_index - searches for an integer in array
 * @array: pointer to array
 * @size: number of elements
 * @cmp: function pointer to compare values
 * Return: index of first match or -1
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
