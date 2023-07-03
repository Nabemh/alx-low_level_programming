#include "main.h"
#include <string.h>

/**
 * *_memset - fills the memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
