#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @c: character to be located
 * @s: string to be checked
 *
 * Return: Pointer to the first occurrence of the character c in s.
 * NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
