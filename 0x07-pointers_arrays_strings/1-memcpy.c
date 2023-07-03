#include "main.h"
/**
 * *_memcpy - Copies a memory area
 * @dest: location to be copied to.
 * @src: source memory location
 * @n: number of bytes to be copied.
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
