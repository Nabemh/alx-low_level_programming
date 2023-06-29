#include "main.h"
/**
 * _strcat - appends a string to another
 * @src: string to append
 * @dest: string to append to
 *
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[1] != '\0')
	{
		i++;
	}
	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
