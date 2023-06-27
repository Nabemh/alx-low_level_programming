#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *@s: char with memory location

 * Return: returns len.
 *
 */

int _strlen(char *s)
{

	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
