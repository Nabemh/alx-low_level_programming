#include "main.h"

/**
 * print_rev - prints the reverse
 * @s: char variable
 *
 */

void print_rev(char *s)
{
	char rev;
	int r, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (r = 0; r < len / 2; r++)
	{
		rev = s[r];
		s[r] = s[len1];
		s[len1--] = rev;
	}
}

