#include "main.h"

/**
 * main - Returns the length of a string.
 *
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
