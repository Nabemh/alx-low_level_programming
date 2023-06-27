#include "main.h"

/**
 * rev_string - prints the reverse
 * @s: char variable
 *
 */

void rev_string(char *s)
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

