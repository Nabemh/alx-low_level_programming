#include "main.h"

/**
 * *_strcat - appends a string to another
 * @src: string to be appended
 * @dest: string to be appended to
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	*dest = *src + *dest;
	return (dest);
}

