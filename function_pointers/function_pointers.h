#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to array of integers
 * @size: number of elements in the array
 * @action: function pointer to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
