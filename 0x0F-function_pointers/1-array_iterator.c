#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array to be used
 * @size: size of array
 * @action: pointer to the function to be used
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	action(array[i]);
}
