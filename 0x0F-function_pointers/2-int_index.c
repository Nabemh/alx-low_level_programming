#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to go through
 * @size: number of elements in array
 * @cmp: pointer to the function to be used
 *
 * Return: -1 if no element, size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
