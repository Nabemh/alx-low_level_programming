#include "main.h"

/**
 * create_array - creates and array of chars
 * @size: size of array
 * @c: characters to be added
 *
 * Return: NULL if error, pointer to array if success
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;


	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (0);
	}

	while (n < size)
	{
		*ptr[n] = c;
		n++;
	}


	return (ptr);
}
