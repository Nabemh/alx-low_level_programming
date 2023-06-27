#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, d;

	len = 0;

	while (scr[len] != '\0')
	{
		len++;
	}

	for (d = 0; d < len; d++)
	{
		dest[d] = scr[i];
	}
	dest[d] = '\0';
	return (dest);

	
}
