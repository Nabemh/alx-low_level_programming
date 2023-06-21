#include "main.h"
/**
 * _isalpha - Shows 1 if input is a
 * letter and 0 in other cases
 *
 * @c: ASCII character
 *
 * Return: 1 for letters, 0 for the rest.
 */
int _isalpha(int c)
{
	if((c >= 97 && <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
