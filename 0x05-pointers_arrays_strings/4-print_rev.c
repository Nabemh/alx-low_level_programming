#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: char variable
 *
 */

void print_rev(char *s)
{
	int r, len, len1;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	len1 = r;

	for (len = len1 - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
