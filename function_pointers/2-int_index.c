#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @cmp: function pointer to compare values
 * Return: index of first element that matches, or -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
