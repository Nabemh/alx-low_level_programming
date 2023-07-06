#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string
 *
 * Return: s
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
