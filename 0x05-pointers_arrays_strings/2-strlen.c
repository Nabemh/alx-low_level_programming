#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Varaible of char type.
 *
 * Return: Returns len.
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
